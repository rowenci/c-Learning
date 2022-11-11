//
// Created by Rowenci on 2022/11/11.
//

#ifndef C_LEARNING_BASEHANDLER_H
#define C_LEARNING_BASEHANDLER_H


class BaseHandler {
public:
    void setNextHandler(BaseHandler* nextHandler) {
        nextHandlerPtr = nextHandler;
    }

    virtual bool call(int money) = 0;

protected:
    BaseHandler* nextHandlerPtr = nullptr;
};


#endif //C_LEARNING_BASEHANDLER_H
