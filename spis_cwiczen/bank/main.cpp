#include <iostream>

using namespace std;
string PIN;

int main()
{
    cout << "Witamy w naszym Banku. Podaj PIN" << endl;
    cin >> PIN;

    if(PIN=="4545")
    {
       cout<< "PIN poprawny";
    } else
    cout << "PIN nieprawidlowy";


    return 0;
}
