#include <iostream>

using namespace std;

int main(){

    float n1, n2, n3;

    cout << "input three numbers" << endl;

    cin >> n1 >> n2 >> n3;

    if(n1 >= n2){
        if(n1 >= n3) cout << "maximum : " << n1;
        else cout << "maximum : " << n3;
    }else{
        if(n2 >= n3) cout << "maximum : " << n2;
        else cout << "maximum : " << n3;
    }

    return 0;

}