#include <iostream>

using namespace std;

/*
我们可以使用 static 关键字来把类成员定义为静态的。
当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本。

如果把函数成员声明为静态的，就可以把函数与类的任何特定对象独立开来。
静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符 :: 就可以访问。
静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。
静态成员函数有一个类范围，他们不能访问类的 this 指针。
您可以使用静态成员函数来判断类的某些对象是否已被创建。
*/
class Box{
    double length;
    double breadth;
    double height;
    public:
        //静态变量必须在定义体外初始化
        static int objectCount;
        Box(double length = 2.0, double breadth = 2.0, double height = 2.0){
            cout << "constructor called" <<endl;
            this->length = length;
            this->breadth = breadth;
            this->height = height;
            objectCount++;
        }
        double Volume(){
            return length * breadth * height;
        }
        static int getCount(){
            return objectCount;
        }
};

int Box::objectCount = 0;

int main(){
    
    cout << "Total objects: " << Box::getCount() << endl;
    cout << "Total objects: " << Box::objectCount << endl;

    Box Box1(3.3, 1.2, 1.5);    // 声明 box1
    Box Box2(8.5, 6.0, 2.0);    // 声明 box2
    
    // 输出对象的总数
    cout << "Total objects: " << Box::getCount() << endl;
    cout << "Total objects: " << Box::objectCount << endl;

    return 0;

}