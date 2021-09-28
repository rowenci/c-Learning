#include <iostream>

using namespace std;
/*
static 存储类指示编译器在程序的生命周期内保持局部变量的存在，
而不需要在每次它进入和离开作用域时进行创建和销毁。
因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。

static 修饰符也可以应用于全局变量。
当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。

在 C++ 中，当 static 用在类数据成员上时，
会导致仅有一个该成员的副本被类的所有对象共享。
*/


//编译时全局变量count报错，符号不明确。原因是count与std::count冲突，修改变量名或限定为局部变量就可以解决。
void func(void);
static int counter = 10;

int main(){
    while(counter --){
        func();
    }
    return 0;
}

void func(void){
    static int i = 5;
    i++;
    cout << "i = " << i;
    cout << " counter = " << counter << endl;
}