#include <iostream>
#include <array>

int main()
{
    using namespace std;
    int num, sum;
    cin >> num;
    sum = num;
    while (num)
    {   
        cout << "Sum of all input = " << sum << endl;
        cin >> num;
        sum += num;
    }
    cout << "Sum of all input = " << sum << endl;
}