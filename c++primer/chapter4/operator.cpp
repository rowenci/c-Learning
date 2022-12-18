#include "iostream"
using namespace std;

int main(int argc, char* argv[])
{
    int ival, jval;
    ival = jval = 0;
    /*
    因为赋值运算符满足右结合律
    上述的执行步骤是
        1. jval = 0;
        2. ival = jval;
    */

    return 0;
}