#include "iostream"
using namespace std;

class FOO{
public:
    FOO() = default;
    FOO(const string nameVal, int ageVal, int sexVal) : name(nameVal), age(ageVal), sex(sexVal) {}
    FOO(const string nameVal) : FOO(nameVal, 0, 0) {}
    ~FOO(){}
private:
    string name;
    int age;
    int sex;
    FOO* fooFriend;

    friend void addAge();
};

void addAge(){
    FOO foo;
    foo.age = 1;
}

int main(int argc, char* argv[]){
    
    FOO foo("rowenci");
    FOO foo1("rowenci", 1, 1);
    return 0;
}