#include <iostream>

using namespace std;

int main(){

    short int i; // 有符号短整数
    short unsigned int j; // 无符号短整数

    /**
     * int 4B
     * short int 2B
     * 2B = 2 * 8bit = 16 bit
     * 2^16 - 1 = 65535 
     * 2^15 - 1 = 32767
     * 因为i是有符号短整数，所以范围是 -32768 <= i <= 32767
     * 所以会溢出
     */
    j = 50000;
    i = j;
    cout << "size of short int " << sizeof(short int) << endl;
    cout << i << " " << j << endl;
    
    return 0;
}