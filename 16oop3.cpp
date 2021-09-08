#include <iostream>

using namespace std;

/*
类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。

友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元。

如果要声明函数为一个类的友元，需要在类定义中该函数原型前使用关键字 friend
*/
class Box{

    double width;
    public:
        double length;
        friend void printWidth(Box box);
        void setWidth(double width){
            this -> width = width;
        }

};

// 注意，printWidth不是Box的成员函数，因为前面没有加Box::
// 但是因为Box中的成员函数printWidth加上了friend关键字
// 所以这个函数可以访问Box中的所有成员变量
// width在Box中是private
void printWidth(Box box){
    cout << "width of box : " << box.width << endl;
}

int main(){

    Box box;
    box.setWidth(10.0);
    // 使用友元函数输出长度
    printWidth(box);

    return 0;

}