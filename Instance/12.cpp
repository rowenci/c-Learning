#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a, b, c, x1, x2, delta, realPart, imaginaryPart;

    cout << "input a, b and c" << endl;
    cin >> a >> b >> c;

    delta = pow(b, 2) - 4 * a * c;

    if(delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    if(delta == 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        cout << "roots are real and same." << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }

    if(delta < 0){
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-delta) / (2 * a);
        cout << "roots has imaginary part" << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
        
    }

    return 0;

}