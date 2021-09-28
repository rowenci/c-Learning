#include <iostream>

using namespace std;

class Box{
    // 类访问修饰符
    public:
        double length;
        double breadth;
        double height;
        // 定义成员函数的方法1
        double get(){
            return length * breadth * height;
        }
        // 定义成员函数的方法2
        void set(double len, double bre, double hei);
    private:
        //默认情况下，类的所有成员都是私有的。
        //这意味着，如果您没有使用任何访问修饰符，类的成员将被假定为私有成员
        
        
    protected:
        //protected（受保护）成员在派生类（即子类）中是可访问的。
};

// :: 是范围解析运算符
void Box::set(double len, double bre, double hei){
    length = len;
    breadth = bre;
    height = hei;
}

int main(){

    Box box1;
    Box box2;
    Box box3;
    double volume = 0.0;

    box1.height = 5.0;
    box1.length = 6.0;
    box1.breadth = 7.0;

    box2.height = 10.0;
    box2.length = 12.0;
    box2.breadth = 13.0;

    volume = box1.height * box1.length * box1.breadth;
    cout << "volume of box1 : " << volume << endl;

    volume = box2.height * box2.length * box2.breadth;
    cout << "volume of box2 : " << volume << endl;

    box3.set(16.0, 8.0, 12.0);
    volume = box3.get();
    cout << "volume of box3 : " << volume << endl;

    return 0;

}