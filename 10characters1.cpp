#include <iostream>

using namespace std;
/*
字符串实际上是使用 null 字符 \0 终止的一维字符数组。
因此，一个以 null 结尾的字符串，包含了组成字符串的字符。

其实，您不需要把 null 字符放在字符串常量的末尾。
C++ 编译器会在初始化数组时，自动把 \0 放在字符串的末尾。
*/
int main(){
    char site[8] = {'r', 'o', 'w', 'e', 'n', 'c', 'i', '\0'};
    char site1[] = "rowenci";
    cout << site << endl;
    cout << site1 << endl;
    return 0;
}