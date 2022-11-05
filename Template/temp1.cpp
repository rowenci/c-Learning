#include <iostream>
using namespace std;

template<typename T>
void swapNum(T& t1, T& t2){
    T temp = t1;
    t1 = t2;
    t2 = temp;
}

template<class T>
void printNum(T t1, T t2){
    cout << "t1 : " << t1 << " t2 : " << t2 << endl;
}

int main(){
    int a = 1;
    int b = 2;
    printNum(a, b);
    swapNum(a, b);
    printNum(a, b);

    float c = 1.1f;
    float d = 2.2f;
    printNum(c, d);
    swapNum(c, d);
    printNum(c, d);
}