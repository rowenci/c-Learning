#include "iostream"
#include "thread"
#include "mutex"
#include "condition_variable"
using namespace std;

mutex m;
condition_variable cv;

int cargo = 0;
bool shipmentAvailable(){
    return cargo != 0;
}

void consume (int n){
    for(int i = 0; i < n; i++){
        // 加锁
        unique_lock<mutex> uniLock(m);
        // 第二个参数为false的时候才会被阻塞，阻塞完就会释放锁
        cv.wait(uniLock, shipmentAvailable);
        cout << "thread " << this_thread::get_id() << " pick " << cargo << endl;
        cargo = 0;
    }
}

int main(int argc, char* argv[])
{
    int n = 10;
    thread consumerThread(consume, n);
    for(int i = 0; i < n; i++){
        // 主线程是producer
        while (shipmentAvailable())
            this_thread::yield();
        unique_lock<mutex> uniLock(m);
        cargo = i + 1;
        cv.notify_one();
    }
    
    consumerThread.join();
    
    return 0;
}