#include <iostream>
#include <array>

int main()
{
    using namespace std;
    double daphne = 100, cleo = 100;
    double da_ir = 0.1, cl_ir = 0.05;
    int year;
    while (daphne >= cleo)
    {
        daphne += da_ir * 100;
        cleo += cl_ir * cleo;
        year ++;
    }
    cout << "After " << year << " years, Daphne has " << daphne 
    << "$, Cleo has " << cleo << "$." << endl;
}