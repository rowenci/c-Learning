#include <iostream>

using namespace std;

/*
c++的对象除了有方法重载
还有运算符重载
就是重写运算符，用于对象的运算
*/

class Box{
    double length;
    double breadth;
    double height;

    public:
        double getVolume(void){
            return length * breadth * height;
        }
        void setLength( double length ){
            this->length = length;
        }

        void setBreadth( double breadth ){
            this->breadth = breadth;
        }

        void setHeight( double height ){
            this->height = height;
        }
        Box operator+(const Box& b){
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            return box;
        }
};

int main(){

    Box Box1;                // 声明 Box1，类型为 Box
    Box Box2;                // 声明 Box2，类型为 Box
    Box Box3;                // 声明 Box3，类型为 Box
    double volume = 0.0;     // 把体积存储在该变量中
    
    // Box1 详述
    Box1.setLength(6.0); 
    Box1.setBreadth(7.0); 
    Box1.setHeight(5.0);
    
    // Box2 详述
    Box2.setLength(12.0); 
    Box2.setBreadth(13.0); 
    Box2.setHeight(10.0);
    
    // Box1 的体积
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume <<endl;
    
    // Box2 的体积
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume <<endl;
    
    // 把两个对象相加，得到 Box3
    Box3 = Box1 + Box2;
    
    // Box3 的体积
    volume = Box3.getVolume();
    cout << "Volume of Box3 : " << volume <<endl;

    return 0;

}