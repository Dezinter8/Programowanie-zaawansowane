#include <iostream>

using namespace std;

int main()
{
    float a , b ,x;
    cout << "Program do obliczania miejsca zerowych funkcji liniowej." << endl;
    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    x = (-b)/a;
    cout << "Miejsce zerowe jest rowne: " << x << endl;

    return 0;
}