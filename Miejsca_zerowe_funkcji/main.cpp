#include <iostream>
#include <cmath>

using namespace std;

void liniowa(){
    float a , b , c , x , y;
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
}

void kwadratowa(){
    float a , b , c , x , y , z, x1, x2, delta;
    cout << " Program obliczajacy miejsca zerowe funkcji kwadratowej" << endl;
    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

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
        cout << "A jest rowne 0, funkcja nie ma rozwiązania" << endl;
    }
}

void kanoniczna()
{
    double p,q,a,x1,x2;
    cout << "Program do obliczania miejsc zerowych funkcji w postaci kanonicznej."<<endl;
    cout << "Podaj p: " <<  endl; cin >> p;
    cout << "Podaj q: " <<endl; cin >> q;
    cout << "Podaj a: " << endl; cin >>a;
    if((-q/a)<0)
    {
        cout << "Funcja nie ma miejsc zerowych" << endl;
    }
    else
    {
        x1=p+sqrt(-q/a);
        x2=p-sqrt(-q/a);
        cout << "Pierwsze miejsce zerowe to: " << x1 << endl;
        cout << "Drugie miejsce zerowe to: " << x2<< endl;
    }
}

int main()
{
    int x = 0;
    while(x>3 || x<1)
    {
    cout<<"MENU"<<endl;
    cout<<"1.Funkca liniowa"<<endl;
    cout<<"2.Funkcja kwadratowa"<<endl;
    cout<<"3. Funkcja w postaci kanonicznej" <<endl;
    cout<<"Wybieram : ";
    cin>>x;
    system("cls");
     }

    switch (x)
    {
       case 1:
            liniowa();
            break;
       case 2:
            kwadratowa();
            break;
        case 3:
            kanoniczna();
            break;
    }

    return 0;
}