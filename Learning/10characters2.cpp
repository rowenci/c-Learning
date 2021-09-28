#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str1[13] = "rowenci1111";
    char str2[13] = "google";
    char str3[13];
    int len;

    // copy str1 to str3
    strcpy(str3, str1);
    cout << str3 << endl;

    // concatenate str1 and str2 to str1
    strcat(str1, str2);
    cout << str1 << endl;

    // lenght of str1
    len = strlen(str1);
    cout << len <<endl;
    
    return 0;
}