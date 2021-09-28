#include <iostream>

using namespace std;

/* 
常量定义的方式
1. #define 宏常量
2. const修饰的变量
*/

#define day 7;

int main(){

    cout << "一周有";
    cout << day;
    cout << "天" << endl;

    const int month = 30;
    cout << "一月有";
    cout << month;
    cout << "天" << endl;

    return 0;
}