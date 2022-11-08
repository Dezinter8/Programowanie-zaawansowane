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
    if(a==0){
        if(b==0){
            cout << "miejsc zerowych jest nieskonczenie wiele"<<endl;
        }
        else{
            cout<<"nie ma miejsc zerowych"<<endl;
        }
    }
    else{
        x = (-b)/a;
        cout << "Miejsce zerowe jest rowne: " << x << endl;
    }

    return 0;
}