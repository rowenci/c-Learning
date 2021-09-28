#include <iostream>

using namespace std;

/*
拷贝构造函数是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象。拷贝构造函数通常用于：

1. 通过使用另一个同类型的对象来初始化新创建的对象。

2. 复制对象把它作为参数传递给函数。

3. 复制对象，并从函数返回这个对象。

如果在类中没有定义拷贝构造函数，编译器会自行定义一个。
如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数。
*/

class Student {
    string name;
    int age;
    int sex;
    int *p;

    public:
        Student() {
            return;
        }
        Student(string name, int age, int sex, int len) {
            this->name = name;
            this->age = age;
            this->sex = sex;
            this->p = new int;
            *p = len;
        }
        // 拷贝构造函数
        Student(const Student &obj){
            cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
            p = new int;
            *p = *obj.p;
            name = obj.name;
            age = obj.age;
            sex = obj.sex;
        }
        ~Student(){
            cout << "end project" << endl;
            delete p;
        }

        void setName(string name) {
            this->name = name;
        }
        void setAge(int age) {
            this->age = age;
        }
        void setSex(int sex) {
            this->sex = sex;
        }
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        int getSex() {
            return sex;
        }
        int getLength(){
            return *p;
        }
};

int main() {
    Student std1("rowenci1", 1, 1, 1);
    Student std2 = std1;

    cout << std2.getName() << std2.getAge() << std2.getSex() << std2.getLength() << endl;
    return 0;
}