#include <iostream>
#include <array>

int main()
{
    using namespace std;
    int num1, num2, sum;
    cin >> num1;
    cin >> num2;
    for (int i = num1; i<=num2; i++)
    {
        sum += i;
    }
    cout << "Sum from " << num1 << " to " << num2 << " is " << sum << endl;
    return 0;
}