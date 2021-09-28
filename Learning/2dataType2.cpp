#include <iostream>

using namespace std;

typedef int feet; // define "feet" as a int

int main(){
    feet distance = 0;
    cout << "distance = " << distance << endl;

    // 枚举变量的定义以及使用
    enum color{
        red,
        green,
        blue
    } c;
    c = blue;
    cout << "enum c = " << c << endl;

    return 0;
}