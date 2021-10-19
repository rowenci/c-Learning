#include <iostream>

using namespace std;

int main(){

    unsigned int n;
    unsigned long long factorial = 1;

    cout << "input a number" << endl;
    cin >> n;

    for(int i = 1; i <= n; i++){
        factorial *= i;
    }

    cout << n << "! = " << factorial << endl;

    return 0;

}