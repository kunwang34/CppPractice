#include <iostream>

int main()
{
    using namespace std;
    int const Arsize = 20;
    char first_name[Arsize];
    char last_name[Arsize];
    char grade;
    int age;
    cout << "What's ur first name: ";
    cin.getline(first_name, Arsize);
    cout << "\nWhat's ur last name: ";
    cin.getline(last_name, Arsize);
    cout << "\nWhat letter grade do u deserve: ";
    cin >> grade;
    cout << "\nWhat's ur age: ";
    cin >> age;
    cout << "\nName: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;


    return 0;
}