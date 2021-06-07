#include <iostream>
#include <array>

int main()
{
    using namespace std;
    const int ArSize = 100;
    array<long double, ArSize> factorial;
    factorial[1] = factorial[0] = 1;
    for (int i = 2; i < ArSize; i++)
    {
        factorial[i] = i * factorial[i-1];
    }
    cout << factorial[ArSize-1] << endl;
    return 0;
}