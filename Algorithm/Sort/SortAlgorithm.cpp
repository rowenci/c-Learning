//
// Created by Rowenci on 2022/11/25.
//
#include "iostream"
#include <ctime>
#include <iomanip>
#include "../Util.h"

using namespace std;

/*
 * 冒泡排序：
 * 1.比较相邻的元素。如果元素大小关系不正确，就交换它们两个；
 * 2.对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对;
 * 3.针对所有的元素重复以上的步骤，除了最后一个；
 * 4.重复步骤1~3，直到排序完成。
 *
 * 时间复杂度：最好：O(n2) 最坏：O(n2)
 * 空间复杂度：O(1)
 * 稳定
 * */
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

/*
 * 快速排序
 * 分两部分：1.划分 2.递归
 * 划分：
 * 1. 设定一个pivot，一般选left指向的元素的值
 * 2. left，right分别指向该部分第一个和最后一个元素
 * 3. right一步步往前走，找到第一个比pivot小的元素。随后，将left指向的元素赋值到该位置上
 * （因为pivot已经为left指向元素的值，所以可以直接为arr[left]赋值）
 * 4. left一步步往后走，找到第一个比pivot大的元素。随后，将right指向的元素赋值到该位置上
 * 5. 重复3、4直到left == right，此时left与right所指向位置也就是pivot元素最终的位置。将该位置的元素赋值为pivot
 * 而且，这个时候，pivot左边的元素都比它小，右边的元素都比它大
 *
 * 对于划分，其实有两种做法。
 * 第一种：找到比pivot小或者大的之后，先不进行元素的替换。当left和right都到指定位置之后，先交换他们两个元素的位置
 *       直到left == right时，交换pivot元素和left元素的位置
 *       注意，如果觉得left == right时，为什么那么确定left指向元素就是比pivot小呢？
 *       有两种情况，第一种是right找到了比pivot小的，此时是left走到right处。那么情况确实是left比pivot小
 *                第二种是right没有找到，此时是right走到left处。但是因为在上一轮当中，left和right交换后，left指向的本来就是比pivot小的
 * 第二种：当left或right找到之后，就开始进行元素的替换，找到right，就把right的元素换到left。
 *       找到left，就把left的元素换到right。
 *       直到left == right时，把left指向元素设置为pivot
 * 第二种占用内存要小一些，因为第一种每次交换两个数都要int个temp
 * 递归：
 * 1. 当left < right时，执行下述步骤
 * 2. 划分一次，获得pivot的位置
 * 3. 对pivot左边元素继续递归
 * 4. 对pivot右边元素继续递归
 *
 *
 * 时间复杂度：最好O(nlogn) 最坏O(n2)
 * 空间复杂度：O(nlogn)
 * 不稳定
 * */
int partition1(int arr[], int left, int right){
    int pivot = arr[left];  // 设置枢轴值，一般选left指向元素
    while(left < right){    // left == right时，划分停止
        while(left < right && arr[right] >= pivot)  // 从后往前找第一个比pivot小的
            right--;
        arr[left] = arr[right]; // 因为left元素已经被pivot记录，所以可以直接把小的元素赋到left指向元素
        while(left < right && arr[left] <= pivot)   // 从前往后找第一个比pivot大的
            left++;
        arr[right] = arr[left]; // 因为right已经到左边的，所以也可以直接赋值
    }
    arr[left] = pivot;  // 找到枢轴值的位置，直接赋值
    return left;
}
int partition2(int arr[], int left, int right){
    int begin = left;   // 记录最开始left的位置
    int pivot = arr[begin]; // 记录枢轴值
    while(left < right){    // left == right时，划分停止
        while(left < right && pivot <= arr[right])  // 从后往前找第一个比pivot小的
            right--;
        while(left < right && pivot >= arr[left])   // 从前往后找第一个比pivot大的
            left++;
        if(left < right){   // 此时还没到结束的时候
            // 交换left和right的位置
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    // 此时left == right，而这个位置是right先到的，所以这个位置的元素一定比pivot小。而pivot就在最开始left指向的位置
    // 因此交换left和pivot值的位置。
    int temp = arr[left];
    arr[left] = pivot;
    arr[begin] = temp;
    return left;
}
void quickSort(int arr[], int left, int right){
    if(left < right){
        int pivot = partition2(arr, left, right);
        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }
}

/*
 * 插入排序
 * 分成两个子数组，第一个子数组内元素是有序的，第二个子数组是待插入数组
 * 可以从第二个元素开始遍历，然后从后往前遍历第一个有序子数组
 * 如果元素比待插入元素大，那么直接把这个元素往后移一位
 * 找到待插入位置放入元素
 *
 * 时间复杂度 最好：O(n) 最坏：O(n2)
 * 空间复杂度 O(n)
 * 稳定
 * */
void insertionSort(int arr[], int size){
    int temp;
    int j;
    for(int i = 1; i < size; i++){
        temp = arr[i];
        j = i - 1;
        while(j >= 0 && temp < arr[j]){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

/*
 * 希尔排序
 * 选中一个步长，一般最开始为size的一般，然后每次除以2
 * 对步长当中的元素进行插入排序
 * 直到步长为0时，停止
 *
 * 时间复杂度：最好：O(n) 最坏：O(n2)
 * 空间复杂度：O(1)
 * 不稳定
 * */
void shellSort(int arr[], int size){
    int temp, j;
    for(int gap = size / 2; gap > 0; gap /= 2){
        for(int i = gap; i < size; i++){
            temp = arr[i];
            j = i - gap;
            while(j >= 0 && temp < arr[j]){
                arr[j + gap] = arr[j];
                j -= gap;
            }
            arr[j + gap] = temp;
        }
    }
}

#define ARRSIZE 10

int main(){
    int arr[ARRSIZE] = {4, 2, 3, 1, 6, 5, 9, 7, 8, 10};
    printArr(arr, ARRSIZE);
//     bubbleSort(arr, ARRSIZE);
//    quickSort(arr, 0, 9);
//    insertionSort(arr, ARRSIZE);
    shellSort(arr, ARRSIZE);
    printArr(arr, ARRSIZE);
    return 0;
}
