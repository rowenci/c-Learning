#include <iostream>

using namespace std;

int max(int num1, int num2);
void swap1(int *x, int *y);
void swap2(int &x, int &y);

int main(){
    int a, b;
    a = 1;
    b = 2;
    int res = max(a, b);
    cout << res << endl;



    cout << "***********************" << endl;
    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;
    /* 调用函数来交换值
    * &a 表示指向 a 的指针，即变量 a 的地址 
    * &b 表示指向 b 的指针，即变量 b 的地址 
    */
    swap1(&a, &b);
    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;
    cout << "***********************" << endl;



    cout << "***********************" << endl;
    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;
    swap2(a, b);
    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;
    cout << "***********************" << endl;

    return 0;
}

// 传值调用
// 不会影响实际参数
int max(int num1, int num2){
    int result;
    if(num1 > num2) result = num1;
    else result = num2;
    return result;
}

// 指针调用
// 带指针的参数需要传入的是地址
// 会影响实际参数
void swap1(int *x, int *y){
   int temp;
   temp = *x;    /* 保存地址 x 的值 */
   *x = *y;        /* 把 y 赋值给 x */
   *y = temp;    /* 把 x 赋值给 y */
}

// 引用调用
// 传入的是引用
// 会影响实际参数
void swap2(int &x, int &y){
   int temp;
   temp = x; /* 保存地址 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 x 赋值给 y  */
}