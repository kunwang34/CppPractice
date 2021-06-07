#include <iostream>
#include <string>

struct CandyBar
{
    char brand[20];
    double weight;
    int calorie;
};
int main()
{
    using namespace std;
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "brand: " << snack.brand << endl;
    cout << "weight: " << snack.weight << endl;
    cout << "calorie: " << snack.calorie << endl;

    return 0;
}