#include <iostream>

using namespace std;

int main(){

    char c;
    bool ischar;
    int isLowercaseVowel, isUppercaseVowel;

    cout << "input a word" << endl;
    cin >> c;

    // 使用ASCII来对字符进行判断
    ischar = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

    if(ischar){
        isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        if (isLowercaseVowel || isUppercaseVowel) cout << c << " is a vowel";
        else cout << c << " is not a vowel" << endl;
    }else{
        cout << "it's not a word" << endl;
    }

    return 0;

}