#include "iostream"
#include "thread"
#include "mutex"
#include "condition_variable"
#include "chrono"
using namespace std;

condition_variable cv;
int value;

void readValue(){
    cin >> value;
    cv.notify_one();
}

int main(int argc, char* argv[])
{
    cout << "enter an integer" << endl;
    // sub thread for receiving inputs
    thread myThread(readValue);
    mutex m;
    unique_lock<mutex> lock(m);
    while(cv.wait_for(lock, chrono::seconds(1)) == cv_status::timeout)
        cout << "." << endl;
    cout << "you entered : " << value << endl;
    myThread.join();
    return 0;
}