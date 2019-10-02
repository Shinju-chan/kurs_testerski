#include <iostream>

using namespace std;

string imie;
int licznik;

int main()
{
    cout <<"Podaj imie: " << endl;
    cin>> imie;
    cout <<"podaj liczbe calokowita"<< endl;
    cin >> licznik;

    for (int i=1; i<=licznik; i++)
    {
        cout<<i<<". "<<imie<<endl;
    }
    return 0;
}
