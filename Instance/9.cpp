#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "input an integer : ";
    cin >> n;

    if(n % 2 == 0) cout << "it's an even number" << endl;
    else cout << "it's an odd number" << endl;

    (n % 2 == 0) ? cout << "it's an even number" << endl : cout << "it's an odd number" << endl;

    return 0;

}