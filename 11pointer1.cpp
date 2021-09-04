#include <iostream>

using namespace std;

const int MAX = 3;

int main(){

    int var[MAX] = {10, 100, 200};
    int *ptr;

    ptr = var;
    for(int i = 0; i < MAX; i++){
        cout << ptr << endl;
        cout << *ptr << endl;
        ptr++;
    }

    /*
    int  var[MAX] = {10, 100, 200};
    
    for (int i = 0; i < MAX; i++)
    {
        *var = i;    // 这是正确的语法
        var++;       // 这是不正确的
    }
    var如果直接输出，是一个地址，也就是指针。
    所以使用*var = i是可以的
    但是如果像指针那样直接使用var++来遍历数组就不行。
    把指针运算符 * 应用到 var 上是完全可以的，但修改 var 的值是非法的。
    这是因为 var 是一个指向数组开头的常量，不能作为左值。
    *(var + 2) = 500; // 这样才可以
    */
    return 0;

}