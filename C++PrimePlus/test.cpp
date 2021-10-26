#include <iostream>
using namespace std;
int main(){
    
    char firstName[10];
    char lastName[10];
    char grade;
    int age;
    cout << "What is your first name? ";
    cin.getline(firstName, 10);
    cout << "What is your last name? ";
    cin.getline(lastName, 10);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "what is your age? ";
    cin >> age;
    grade += 1;
    cout << "Name: " << lastName << "," << firstName << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age <<endl;

    return 0;
}