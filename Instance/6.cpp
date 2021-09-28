#include <iostream>

using namespace std;

int main(){

    int a, b, res, remainder;
    cout << "input dividend : ";
    cin >> a;

    cout << "intput divisor : ";
    cin >> b;

    res = a / b;
    remainder = a % b;

    cout << "quotient : " << res << endl;
    cout << "remainder : " << remainder << endl;

    return 0;

}