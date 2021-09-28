#include <iostream>

using namespace std;

int main(){

    int a = 5, b = 10, temp;

    cout << "before exchange : ";
    cout << "a = " << a;
    cout << " b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "after exchange : ";
    cout << "a = " << a;
    cout << " b = " << b << endl;


    a = 5;
    b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "after exchange : ";
    cout << "a = " << a;
    cout << " b = " << b << endl;

    return 0;

}