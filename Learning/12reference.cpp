#include <iostream>

using namespace std;
/*
引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。
一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量。

引用很容易与指针混淆，它们之间有三个主要的不同：

不存在空引用。引用必须连接到一块合法的内存。
一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
引用必须在创建时被初始化。指针可以在任何时间被初始化。
*/
int main(){

    int i;
    double d;

    int& r = i;
    double& s = d;

    i =  5;
    cout << i << endl;
    cout << r << endl;

    d = 11.7;
    cout << d << endl;
    cout << s << endl;

    return 0;

}