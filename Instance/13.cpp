#include <iostream>

using namespace std;

int main(){

    int n, sum = 0;

    cout << "输入正整数" << endl;

    cin >> n;

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout << "sum = " << sum;

    return 0;

}