#include <iostream>
#include <array>

int main()
{
    using namespace std;
    array<double, 3> sprint_grade;
    cin >> sprint_grade[0];
    cin >> sprint_grade[1];
    cin >> sprint_grade[2];
    cout << "3 times avg grade is " << (sprint_grade[0] + sprint_grade[1] + sprint_grade[2])/3 << endl;
    return 0;
}