#include <iostream>

using namespace std;

int main()
{
    float a , b , c , x , y , z;
    cout << "Program do obliczania miejsca zerowych funkcji liniowej." << endl;
    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
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

    cout << endl;
    cout << "Postac kierunkowa funkcji liniowej: " << endl;
    y=(a*x)+b;
    cout << "y = " << y;

    return 0;
}