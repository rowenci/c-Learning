#include <iostream>

using namespace std;

int main(){

    int year;
    
    cout << "input year" << endl;
    cin >> year;

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0) cout << year << " 是闰年";
            else cout << year << " 不是闰年";
        }else{
            cout << year << " 是闰年";
        }
    }else{
        cout << year << " 不是闰年";
    }

    return 0;

}