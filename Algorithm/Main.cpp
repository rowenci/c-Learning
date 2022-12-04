//
// Created by Rowenci on 2022/12/3.
//
#include <algorithm>
#include "SortAlgorithm.cpp"
#include "SearchAlgorithm.cpp"
#include "Util.cpp"

#define ARRSIZE 10

/*
// 排序算法
int main(){
    int arr1[ARRSIZE] = {4, 2, 3, 1, 6, 5, 9, 7, 8, 10};
    int arr2[ARRSIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int temp[ARRSIZE] = {0};
    printArr(arr2, ARRSIZE);
//  bubbleSort(arr, ARRSIZE);
//  quickSort(arr, 0, 9);
//  insertionSort(arr, ARRSIZE);
//  selectSort(arr2, ARRSIZE);
    mergeSort(arr2, 0, ARRSIZE - 1, temp);
    printArr(arr2, ARRSIZE);
    return 0;
}
*/

int main(){
    int arr1[ARRSIZE] = {4, 2, 3, 1, 6, 5, 9, 7, 8, 10};
    int arr2[ARRSIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArr(arr2, ARRSIZE);
//    cout << sequenceSearch(arr, ARRSIZE, 5) << endl;
//    cout << binarySearch1(arr2, ARRSIZE, 5) << endl;
    cout << binarySearch2(arr2, ARRSIZE, 0, ARRSIZE - 1, 10) << endl;
    return 0;
}
