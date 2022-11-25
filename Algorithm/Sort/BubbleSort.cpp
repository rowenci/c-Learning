//
// Created by Rowenci on 2022/11/25.
//
#include "../Util.h"

using namespace std;

void bubbleSort(int arr[], int size){
    bool flag = false;  // 如果没发生交换，则已经有序，可以直接停止
    for(int i = 0; i < size - 1; i++){  // 为什么要-1呢？因为i最多只能到倒数第二个元素
        flag = false;
        for(int j = 0; j < size - 1 - i; j++){  // 加了等号就不稳定，不加就稳定。
            if (arr[j] > arr[j + 1]){   // 小的往后排
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            return;
    }
}

#define ARRSIZE 10

int main(){
    int arr[ARRSIZE] = {2, 4, 3, 1, 6, 5, 9, 7, 8, 10};
    printArr(arr, ARRSIZE);
    bubbleSort(arr, ARRSIZE);
    printArr(arr, ARRSIZE);
    return 0;
}
