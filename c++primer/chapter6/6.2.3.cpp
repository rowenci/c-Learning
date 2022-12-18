#include "iostream"
using namespace std;

int main(int argc, char* argv[])
{
    int i = 0;
    int const *p = &i;
    int * const q = &i;
    return 0;
}