#include "iostream"
#include "vector"
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2(v1);
    vector<int> v3 = v1;
    vector<int> v4(10, 1);  // 10个1
    vector<int> v5(10); // 10个0
    for(int i : v5)
        cout << i << endl;
    vector<int> v6{1, 2, 3, 4};
    vector<int> v7 = {1, 2, 3, 4, 5};

    // 提前定义vector的大小是没有必要的
    // 只有一种情况有例外，那就是所有元素的值都一样
    return -1;
}