#include "iostream"
#include "thread"
#include "mutex"

using namespace std;

mutex m;

void process1Lock(int *a)
{
    m.lock();
    cout << "process1函数正在改写a" << endl;
    cout << "原始a为" << *a << endl;
    *a += 1;
    cout << "+1 后 a为" << *a << endl;
    m.unlock();
}

void process2Lock(int *a)
{
    m.lock();
    cout << "process2函数正在改写a" << endl;
    cout << "原始a为" << *a << endl;
    *a += 2;
    cout << "+2 后 a为" << *a << endl;
    m.unlock();
}

void process1(int *a)
{
    cout << "process1函数正在改写a" << endl;
    cout << "原始a为" << *a << endl;
    *a += 1;
    cout << "+1 后 a为" << *a << endl;
}

void process2(int *a)
{
    cout << "process2函数正在改写a" << endl;
    cout << "原始a为" << *a << endl;
    *a += 2;
    cout << "+2 后 a为" << *a << endl;
}
int main(){
    int temp = 1;
    int *a = &temp;
    thread proc1(process1Lock, a);
    thread proc2(process2Lock, a);
    proc1.join();
    proc2.join();
    return 0;
}