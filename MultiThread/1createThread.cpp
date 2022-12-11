#include "iostream"
#include "thread"
using namespace std;

void process(int a){
    cout << "我是子线程，id是 " << this_thread::get_id() << endl;
    cout << "传入的参数是 " << a << endl;
}

int main(){
    cout << "我是主线程" << endl;
    int a = 1;
    thread t1(process, 65536);
    cout << "主线程中显示子线程的id是 " << t1.get_id() << endl;
    t1.join();
    return 0;
}