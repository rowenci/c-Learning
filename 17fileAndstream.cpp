#include <iostream>
#include <fstream>

using namespace std;
/*
ofstream    该数据类型表示输出文件流，用于创建文件并向文件写入信息。
ifstream    该数据类型表示输入文件流，用于从文件读取信息。
fstream     该数据类型通常表示文件流，且同时具有 ofstream 和 ifstream 两种功能，这意味着它可以创建文件，向文件写入信息，从文件读取信息。
*/
int main(){

    char data[100];

    /*
    // 写入模式打开文件
    ofstream outfile;
    outfile.open("test.txt");

    cout << "writing to the file" << endl;
    cout << "enter some words : ";
    cin.getline(data, 100);

    outfile << data << endl;
    outfile.close();
    */

    ifstream infile;
    infile.open("test.txt");
    cout << "reading from the file" << endl;
    infile >> data; // 注意，这里只能用右箭头
    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile.close();

    return 0;

}