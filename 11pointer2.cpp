#include <iostream>

using namespace std;

int main(){

    // 间接寻址

    int var;
    int *ptr;
    int **pptr;
    var = 3000;
    ptr = &var;
    pptr = &ptr;

    cout << var << endl;
    cout << *ptr << endl;
    cout << **pptr << endl;

    return 0;

}