#include <iostream>
#include <string>
int main()
{
    using namespace std;
    int const Arsize = 20;
    string first_name;
    string last_name;
    char grade;
    int age;
    cout << "What's ur first name: ";
    getline(cin, first_name);
    cout << "\nWhat's ur last name: ";
    cin >> last_name;
    cout << "\nWhat letter grade do u deserve: ";
    cin >> grade;
    cout << "\nWhat's ur age: ";
    cin >> age;
    cout << "\nName: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}