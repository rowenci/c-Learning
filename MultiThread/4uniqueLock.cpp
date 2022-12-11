#include "iostream"
#include "thread"
#include "mutex"

using namespace std;

struct Box
{
    explicit Box(int num) : num_things{num} {}
    int num_things;
    mutex m;
};

void transfer(Box &from, Box &to, int num){
    unique_lock<mutex> lock1(from.m, defer_lock);
    unique_lock<mutex> lock2(to.m, defer_lock);

    lock(lock1, lock2);

    from.num_things -= num;
    to.num_things += num;
}

int main(){
    Box acc1(100);
    Box acc2(50);
    // ref用于包装按引用传递的值
    // cref用于包装按const引用传递的值
    thread t1(transfer, ref(acc1), ref(acc2), 10);
    thread t2(transfer, ref(acc2), ref(acc1), 5);
    t1.join();
    t2.join();
    cout << "acc1 nums_things" << acc1.num_things << endl;
    cout << "acc2 nums_things" << acc2.num_things << endl;
    return 0;
}