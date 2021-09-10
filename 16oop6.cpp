#include <iostream>

using namespace std;

/*
子类可以访问父类的public和protected成员
只有private成员是父类私有的

还有，java是单继承多实现
但是c++可以多继承
*/

class Shape{
    protected:
        int width;
        int height;

    public:
        void setWidth(int width){
            this->width = width;
        }
        void setHeight(int height){
            this->height = height; 
        }
};

class Rectangle: public Shape{
    public:
        int getArea(){
            return (width * height);
        }
};

int main(){

    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(7);
    cout << rect.getArea() << endl;

    return 0;

}