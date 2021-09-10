#include <iostream>

using namespace std;

/*
C++ 接口是使用抽象类来实现的
如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。
纯虚函数是通过在声明中使用 "= 0" 来指定的
*/

class Shape{
    protected:
        int width;
        int height;
    public:
        virtual int getArea() = 0;
        void setWidth(int width){
            this->width = width;
        }
        void setHeight(int height){
            this->height = height;
        }
};

class Rectangle : public Shape{
    public:
        int getArea(){
            return (width * height);
        }
};

int main(){

    Rectangle rect;
    rect.setHeight(1);
    rect.setWidth(2);
    cout << rect.getArea() << endl;

    return 0;

}