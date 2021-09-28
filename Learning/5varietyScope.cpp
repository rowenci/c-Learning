#include <iostream>

using namespace std;

// 全局变量
int g;

int main(){

    // 局部变量
    int a, b;
    int c;

    // 初始化
    a = 10;
    b = 20;
    c = a + b;
    g = a + b;
    cout << c << endl;
    cout << g << endl;

    return 0;
}