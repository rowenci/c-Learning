#include <iostream>

using namespace std;

double getAverage(int *p, int size);
double getAverage1(int arr[5]);
double getAverage2(int arr[], int size);

int * getArray();

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


    /*
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    double avg;
    avg = getAverage(p, 5);
    cout << avg << endl;
    */
    /*
    如果函数是固定长度，那么不论传入的数组是多长，都会按5个来计算
    int arr[6] = {1, 2, 3, 4, 5, 6};
    double avg;
    avg = getAverage1(arr);
    cout << avg << endl;
    */
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    double avg;
    avg = getAverage2(arr, 5);
    cout << avg << endl;
    */
    
    /*
    int *r;
    r = getArray();
    for(int i = 0; i < 5; i++){
        cout << r[i] << endl;
    }
    */

    return 0;
}

/*
传递数组给函数
*/
double getAverage(int *p, int size){
    int sum = 0;
    double avg;
    for(int i = 0; i < size; i++){
        sum += (*p + i);
    }
    avg = (double)sum / size;
    return avg;
}

double getAverage1(int arr[5]){
    int sum = 0;
    double avg;

    for(int i = 0; i < 5; i ++){
        sum += arr[i];
    }

    avg = double(sum) / 5;

    return avg;
}

double getAverage2(int arr[], int size){
    int sum = 0;
    double avg;

    for(int i = 0; i < size; i ++){
        sum += arr[i];
    }

    avg = double(sum) / size;

    return avg;
}

/*
从函数返回数组
*/
int * getArray(){
    static int r[5] = {1, 2, 3, 4, 5};
    return r;
}