//
// Created by Rowenci on 2022/11/18.
//
#include <cstring>
#include "iostream"
template <size_t N, size_t M>
int strCompare(const char (&str1)[N], const char (&str2)[M]){
    return strcmp(str1, str2);
}
int main(){
    std::cout << strCompare("hello", "world") << std::endl;
    strCompare("hello", "world");
    return -1;
}