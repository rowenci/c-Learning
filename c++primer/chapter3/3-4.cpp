#include "iostream"
#include "vector"
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v1;
    auto b = v1.begin();    // 指向第一个元素
    auto e = v1.end();  // 指向最后一个元素的下一个位置（尾后迭代器）
    return 0;
}