#include "iostream"
using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(int argc, char* argv[])
{
    int (*pf)(int, int);
    pf = sum;
    cout << pf(1, 2) << endl;
    return 0;
}