#include <iostream>

using namespace std;

/*
多态：

静态多态：  函数重载
            泛型编程

动态多态    虚函数


静态多态是编译器在编译期间完成的，编译器会根据实参类型来选择调用合适的函数，
如果有合适的函数可以调用就调，没有的话就会发出警告或者报错


动态多态： 显然这和静态多态是一组反义词，
它是在程序运行时根据基类的引用（指针）指向的对象来确定自己具体该调用哪一个类的虚函数。
*/

class TakeBus{
    public:
        void TakeBusToSubway(){
            cout << "go to Subway--->please take bus of 318" << endl;
        }
        void TakeBusToStation(){
            cout << "go to Station--->pelase Take Bus of 306 or 915" << endl;
        }
};

class Bus{
    public:
        virtual void TakeBusToSomewhere(TakeBus& tb) = 0;  //？？？为什么要等于0
};

class Subway:public Bus{
    public:
        virtual void TakeBusToSomewhere(TakeBus& tb){
            tb.TakeBusToSubway();
        }
};
class Station :public Bus{
    public:
        virtual void TakeBusToSomewhere(TakeBus& tb){
            tb.TakeBusToStation();
        }
};

int main(){
    TakeBus tb;
    Bus* b = NULL;
    //假设有十辆公交车，如果是奇数就是去地铁口的，反之就是去火车站的
    for (int i = 1; i <= 10; ++i){
        if ((rand() % i) & 1)
            b = new Subway;
        else
            b = new Station;
    }
    b->TakeBusToSomewhere(tb);
    delete b;
    return 0;
}