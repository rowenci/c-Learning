#include <iostream>

using namespace std;
// 在程序中，局部变量和全局变量的名称可以相同，但是在函数内，局部变量的值会覆盖全局变量的值
int g = 20;

int main(){
    int g = 10;
    cout << g << endl;
    return 0;
}