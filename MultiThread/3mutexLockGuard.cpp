#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void process1(int *a)
{
    {
        lock_guard<mutex> lg(m);
        cout << "process1函数正在改写a" << endl;
        cout << "原始a为" << *a << endl;
        *a += 1;
        cout << "+1 后 a为" << *a << endl;
    }
    cout << "process1 作用域外的内容1" << endl;
    cout << "process1 作用域外的内容2" << endl;
    cout << "process1 作用域外的内容3" << endl;
}

void process2(int *a)
{
    {
        lock_guard<mutex> lg1(m);
        cout << "process2函数正在改写a" << endl;
        cout << "原始a为" << *a << endl;
        *a += 2;
        cout << "+2 后 a为" << *a << endl;
    }
    cout << "process2 作用域外的内容4" << endl;
    cout << "process2 作用域外的内容5" << endl;
    cout << "process2 作用域外的内容6" << endl;
}
int main(){
    int temp = 1;
    int *a = &temp;
    thread proc1(process1, a);
    thread proc2(process2, a);
    proc1.join();
    proc2.join();
    return 0;
}