#include <iostream>

using namespace std;

typedef int feet; // define "feet" as a int 就是给变量类型定义一个新的名字

int main(){
    feet distance = 0;
    cout << "distance = " << distance << endl;

    // 枚举变量的定义以及使用
    /*
    枚举类型(enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。
    如果一个变量只有几种可能的值，可以定义为枚举(enumeration)类型。所谓"枚举"是指将变量的值一一列举出来，变量的值只能在列举出来的值的范围内。
    如果将这个枚举类型的变量赋值为其他值，编译器就会报错。
    */
    enum color{
        red,
        green,
        blue
    } c;
    c = blue;
    cout << "enum c = " << c << endl;

    return 0;
}