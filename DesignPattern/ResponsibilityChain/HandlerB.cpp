//
// Created by Rowenci on 2022/11/11.
//

#include "HandlerB.h"
using namespace std;
bool HandlerB::call(int money) {
    if(money <= 2000){
        cout << "I can handle 2000, it is ok : " << money << endl;
        return true;
    }
    if(nextHandlerPtr != nullptr){
        nextHandlerPtr->call(money);
    }else{
        cout << "B : there is no other handler, the money is too many " << money << endl;
        return false;
    }
}
