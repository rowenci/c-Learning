//
// Created by Rowenci on 2022/12/3.
//

/**
 * 顺序查找
 * 时间复杂度 O(n)
 * 空间复杂度 O(1)
 */
static int sequenceSearch(int arr[], int length, int value){
    for(int i = 0; i < length; i++){
        if(arr[i] == value)
            return i;
    }
    return -1;
}

/**
 * 二分查找，需要注意的是，这个算法需要有序数组
 * 时间复杂度 O(logn)
 * 空间复杂度 O(1)
 */
static int binarySearch1(int arr[], int length, int value){
    int low = 0;
    int high = length - 1;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == value)
            return mid;
        if(arr[mid] > value)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
/**
 * 递归方式
 */
static int binarySearch2(int arr[], int length, int low, int high, int value){
    int mid = (low + high) / 2;
    if(arr[mid] == value)
        return mid;
    if(arr[mid] > value)
        return binarySearch2(arr, length, low, mid - 1, value);
    else
        return binarySearch2(arr, length, mid + 1, high, value);
}