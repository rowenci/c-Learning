#include "iostream"
#include "thread"
using namespace std;

void process(int a){
    cout << "我是子线程 " << std::this_thread::get_id() << std::endl;
    cout << "传入的参数是" << a << endl;
}

int main(){
    cout << "我是主线程" << endl;
    int a = 1;
    thread t1(process, 1);
    t1.join();
    return 0;
}