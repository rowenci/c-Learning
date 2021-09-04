#include <iostream>

using namespace std;

int main(){

    /*
    1 dim array
    int numberList[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int elem;
    for(int i = 0; i < 10; i++){
        elem = numberList[i];
        cout << elem << endl;
    }
    */

    /*
    2 dim array
    int numberList1[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    int elem;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            elem = numberList1[i][j];
            cout << elem << endl;
        }
    }

    这个效果也是一样的
    int numberList1[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int elem;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            elem = numberList1[i][j];
            cout << elem << endl;
        }
    }
    */
    
    /*
    指向数组的指针
    int *p;
    int pointerList[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    p = pointerList;
    // p 指向的是pointerList的首地址，也就是0元素所在的地址
    // 如果直接使用指针*p，那么就会取到p所在地址的数据
    // 也就是0元素所在的地址的数据
    for(int i = 0; i < 10; i++){
        cout << *(p + i) << endl;
    }
    */

    return 0;
}