#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a , b , c , x , y , z, x1, x2, delta;
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

    cout << endl;
    cout << " Program obliczajacy miejsca zerowe funkcji kwadratowej" << endl;

    if (a!=0) {
        delta= (b*b)-4*a*c;
        x1=(-b-sqrt(delta))/2*a;
        x2=(-b+sqrt(delta))/2*a;

        cout << "Delta " << delta << endl;

        if (delta<0) {
            cout << " Brak miejsc zerowych" << endl;
        } else if (delta==0) {
            cout << "Jedno miejsce zerowe: " << -b/2*a << endl;
        } else {
            cout << "Dwa miejsca zerowe: x1 = " << x1 << " x2 = " << x2 << endl;
        }
    } else {
        cout << "A jest rowne 0" << endl;
    }

    return 0;
}