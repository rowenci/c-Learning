cmake_minimum_required(VERSION 3.23)
project(c_Learning)

set(CMAKE_CXX_STANDARD 14)

add_executable(c_Learning
        DesignPattern/ResponsibilityChain/BaseHandler.h DesignPattern/ResponsibilityChain/HandlerA.cpp DesignPattern/ResponsibilityChain/HandlerA.h DesignPattern/ResponsibilityChain/HandlerB.cpp DesignPattern/ResponsibilityChain/HandlerB.h DesignPattern/ResponsibilityChain/TestRC.cpp)
