//
// Created by Rowenci on 2022/11/25.
//
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
 * 递归：
 * 1. 当left < right时，执行下述步骤
 * 2. 划分一次，获得pivot的位置
 * 3. 对pivot左边元素继续递归
 * 4. 对pivot右边元素继续递归
 * */
int partition(int arr[], int left, int right){
    int pivot = arr[left];
    while(left < right){
        while(left < right && arr[right] >= pivot)
            right--;
        arr[left] = arr[right];
        while(left < right && arr[left] <= pivot)
            left++;
        arr[right] = arr[left];
    }
    arr[left] = pivot;
    return left;
}
void quickSort(int arr[], int left, int right){
    if(left < right){
        int pivot = partition(arr, left, right);
        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }
}

#define ARRSIZE 10

int main(){
    int arr[ARRSIZE] = {4, 2, 3, 1, 6, 5, 9, 7, 8, 10};
    printArr(arr, ARRSIZE);
    // bubbleSort(arr, ARRSIZE);
    quickSort(arr, 0, 9);
    printArr(arr, ARRSIZE);
    return 0;
}
