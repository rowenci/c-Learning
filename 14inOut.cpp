#include <iostream>
 
using namespace std;
 
int main()
{
    char name[50];
    
    cout << "请输入您的名称： ";
    cin >> name;
    cout << "您的名称是： " << name << endl;

    char str[] = "Unable to read....";
    cerr << "Error message : " << str << endl;

    char str1[] = "Unable to read....";
    clog << "Error message : " << str1 << endl;
    return 0;
}