#include <iostream>
#include <string>

struct Pizza
{
    char name[20];
    double diameter;
    int weight;
};
int main()
{
    using namespace std;
    Pizza pizza;
    cout << "company name: ";
    cin.getline(pizza.name, 20);
    cout << "\ndiameter: ";
    cin >> pizza.diameter;
    cout << "\nweight: ";
    cin >> pizza.weight;
    cout << "\nPizza company name is " << pizza.name << endl;
    cout << "Pizza diameter is " << pizza.diameter << endl;
    cout << "Pizza weight is " << pizza.weight << endl;

    return 0;
}