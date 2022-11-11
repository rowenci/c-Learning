//
// Created by Rowenci on 2022/11/11.
//

#ifndef C_LEARNING_HANDLERA_H
#define C_LEARNING_HANDLERA_H

#include <iostream>
#include "BaseHandler.h"

class HandlerA : public BaseHandler{
public:
    bool call(int money) override;
};


#endif //C_LEARNING_HANDLERA_H
