#include "iostream"
using namespace std;

int main(int argc, char* argv[])
{
    unsigned int u = 10;
    int i = -42;
    cout << i + i << endl;
    // 有符号和无符号数相加，先把有符号数转换成无符号数
    // 无符号转有符号：第一个为符号位，然后转出来的是补码
    // 有符号转无符号：若为负数，因为负数是用补码存的，所以直接读
    cout << i + u << endl;
    return 0;
}