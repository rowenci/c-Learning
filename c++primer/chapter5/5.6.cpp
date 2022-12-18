#include "iostream"
using namespace std;

void testThrow(){
    int i = 0;
    int j = 1;
    if(i != j)
        throw runtime_error("test throw");
}

int main(int argc, char* argv[])
{
    try
    {
        testThrow();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}