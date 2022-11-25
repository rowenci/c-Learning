////
//// Created by Rowenci on 2022/11/22.
////
//
//#include <future>
//#include "iostream"
//#include "thread"
//#include "mutex"
//using namespace std;
//mutex m;
//void proc1(int* a){
//    m.lock();
//    cout << "proc1 is changing a" << endl;
//    cout << "origin1 a is " << *a << endl;
//    *a = *a + 1;
//    cout << "now 1a is " << *a << endl;
//    m.unlock();
//}
//void proc2(int* a){
//    m.lock();
//    cout << "proc2 is changing a" << endl;
//    cout << "origin2 a is " << *a << endl;
//    *a = *a + 2;
//    cout << "now 2a is " << *a << endl;
//    m.unlock();
//}
//void asyncT(){
//    for(int i = 0; i < 100; i++)
//        cout << i << endl;
//}
//int testThread(){
//    cout << "i am main thread" << endl;
//    int* a;
//    int b = 0;
//    a = &b;
//    thread th1 (proc1, a);
//    thread th2 (proc2, a);
//    th1.join();
//    th2.join();
//
//    //future<void> fu = async(asyncT);
//    cout << "i am main thread1" << endl;
//    cout << "i am main thread2" << endl;
//    cout << "i am main thread3" << endl;
//    cout << "i am main thread4" << endl;
//    cout << "i am main thread5" << endl;
//    cout << "i am main thread6" << endl;
//    return -1;
//}
