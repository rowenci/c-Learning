#include "iostream"
#include "stdexcept"
int main(int argc, char const *argv[])
{
    test:
    char *p;
    std::cout << sizeof(p) << std::endl;
    goto test;
    return 0;
}
