#include <atomic>
#include "iostream"

using namespace std;
class Father{
public:
    typedef Father Super;
    int b = 1;
    virtual void test() {
        cout << 123123123 << endl;
    }
};

class Person : Father{
public:
    int age;
    void test() override {
        Super::test();
    }

public:
    void operator + (Person &p){
        this->age += p.age;
    }
    friend ostream& operator << (ostream& os, Person &p){
        os << "hello";
        return os;
    }
};

struct Son{
    int a;
    void test() {
        cout << "asdasasdasdd" << endl;
    }
};

struct Sonson : public Son{
    int b;
    void testSonson(){
        test();
        cout << a << endl;
    }
};

int main()
{
    Person p1;
    p1.age = 1;
    Person p2;
    p2.age = 2;
    cout << p1.age << endl;
    p1 + p2;
    cout << p1.age << endl;

    cout << p1 << endl;

    p1.test();

    Son son;
    son.test();
    return 0;
}