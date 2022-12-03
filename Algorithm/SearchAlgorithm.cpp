//
// Created by Rowenci on 2022/12/3.
//

static int sequenceSearch(int arr[], int length, int value){
    for(int i = 0; i < length; i++){
        if(arr[i] == value)
            return i;
    }
    return -1;
}

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
        if(arr[mid] < value)
            low = mid + 1;
    }
    return -1;
}