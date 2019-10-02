#include <iostream>
#include <fstream>

using namespace std;

string imie, nazwisko;
int tel;

int main()
{
    cout << "Podaj imie: ";         cin>>imie;
    cout << "Podaj nazwisko: ";     cin>>nazwisko;
    cout << "Podaj nr telefonu: ";  cin>>tel;

    fstream plik;
    plik.open("wizytowka.txt", ios::out | ios::app);

    plik<< imie<<endl;
    plik<< nazwisko<<endl;
    plik<< tel<<endl;

    plik.close();

    return 0;
}
