#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

using namespace std;

float x, y;
char wybor;

int main()
{
   for (;;)
   {
    cout << "podaj liczbê 1: " << endl;
    cin>> x;
    cout << "podaj liczbê 2: " << endl;
    cin>> y;

    cout<< endl;
    cout<< "Menu glowne"<<endl;
    cout<<"______________________"<<endl;
    cout<<"1. Dodawanie"<<endl;
    cout<<"2. Odejmowanie"<<endl;
    cout<<"3. Mnozenie"<<endl;
    cout<<"4. Dzielenie"<<endl;
    cout<<"5. Koniec"<<endl;

    cout<<endl;
    wybor=getch ();

    switch (wybor)
    {
        case '1':
            cout << "Suma = "<< x+y;
        break;
        case '2':
            cout << "Roznica = "<< x-y;
        break;
        case '3':
            cout << "Iloczyn = "<< x*y;
        break;
        case '4':
        if (y==0) cout<< "Nie dziel przez zero, cholero!"<<endl;
           else  cout << "Iloraz = "<< x/y;
        break;
        case '5':
            exit(0);
        break;
        default:  cout <<"Nie ma takiej opcji w menu";
        }
        getchar(); getchar();
        system ("cls");
    }

    return 0;
}
