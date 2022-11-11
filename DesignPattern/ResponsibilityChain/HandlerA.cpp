//
// Created by Rowenci on 2022/11/11.
//

#include "HandlerA.h"
using namespace std;
bool HandlerA::call(int money) {
    if(money <= 1000){
        cout << "I can handle 1000, it is ok : " << money << endl;
        return true;
    }
    if(nextHandlerPtr != nullptr){
        nextHandlerPtr->call(money);
    }else{
        cout << "A : there is no other handler, the money is too many " << money << endl;
        return false;
    }
}
