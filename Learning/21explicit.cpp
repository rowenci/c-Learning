#include <iostream>

class TestExplicit  // 没有使用explicit关键字的类声明, 即默认为隐式声明
{
public:
    int _i;
    TestExplicit(int i) : _i(i) {}
};


int main(){
    TestExplicit t1 = 10;
    TestExplicit t2(10);
    t1 = 2;
    t1 = t2;
    TestExplicit t3 = 'c';
    return -1;
}