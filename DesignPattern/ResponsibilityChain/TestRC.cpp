//
// Created by Rowenci on 2022/11/11.
//

#include "iostream"
#include "BaseHandler.h"
#include "HandlerA.h"
#include "HandlerB.h"

using namespace std;
int main(){
    BaseHandler* handler1 = new HandlerA;
    BaseHandler* handler2 = new HandlerB;
    handler1->setNextHandler(handler2);
    handler1->call(1000);
    cout << "--------------------" << endl;
    handler1->call(2000);
    cout << "--------------------" << endl;
    handler1->call(3000);
    return 0;
}