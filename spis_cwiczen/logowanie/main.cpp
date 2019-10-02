#include <iostream>

using namespace std;
string login, haslo;

int main()
{
    cout << "Podaj login: ";
    cin>> login;
    cout << "Podaj haslo: ";
    cin>> haslo;

    if((login=="shinju")&&(haslo=="usagi"))
        {cout<< "Haslo i login poprawne, jestes zalogowany";
    }
    else
    {
      cout<<"Nieporawne logowanie";
    }

    return 0;
}
