#include <iostream>

using namespace std;

int main(){

    int var1;
    char var2[10];

    cout << "var1 address : ";
    cout << &var1 << endl;

    cout << "var2 address : ";
    cout << &var2 << endl;

    int var = 20;
    int *ip;
    ip = &var;

    cout << "value of var : ";
    cout << var << endl;

    cout << "address of var : ";
    cout << &var << endl;

    cout << "address stored in ip : ";
    cout << ip << endl;

    cout << "value of *ip : ";
    cout << *ip << endl;

    return 0;

}