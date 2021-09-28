#include <iostream>

using namespace std;

class Student {
    string name;
    int age;
    int sex;

public:
    // 构造函数
    // 如果需要空的构造函数，那么必须有个return，不然会报错
    Student() {
        return;
    }
    // 构造函数的重载
    Student(string name, int age, int sex) {
        this->name = name;
        this->age = age;
        this->sex = sex;
    }
    /*
    假设有一个类 C，具有多个字段 X、Y、Z 等需要进行初始化，
    同理地，您可以使用上面的语法，
    只需要在不同的字段使用逗号进行分隔，如下所示：

    C::C( double a, double b, double c): X(a), Y(b), Z(c)
    {
    ....
    }
    */

    // 析构函数
    // 它会在每次删除所创建的对象时执行。
    ~Student(){
        cout << "end project" << endl;
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
};

int main() {
    Student std1;
    std1.setName("rowenci1");
    std1.setAge(1);
    std1.setSex(1);

    Student std2("rowenci2", 2, 2);

    Student *sp;
    sp = &std1;

    cout << std1.getName() << std1.getAge() << std1.getSex() << endl;
    cout << std2.getName() << std2.getAge() << std2.getSex() << endl;
    cout << sp->getName() << sp->getAge() << sp->getSex() << endl;

    return 0;
}