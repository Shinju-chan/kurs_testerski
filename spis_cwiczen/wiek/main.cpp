#include <iostream>

using namespace std;
int wiek;
int main()
{
    cout << "Ile masz lay? :" << endl;
    cin>> wiek;

    if (wiek<18)
    {
        cout<<"Nie jesteœ pelnoletni- Nie mozesz brac udzial w wyborach i nie mozesz kandydowac na prezydenta";
    }
    else if ((wiek>=18)&&(wiek<35))
    {
    cout << "Jesteœ pelnoletni - Mozesz brac udzial w wyborach, ale nie mozesz kandydowac na prezydenta";
    }
    else
    { cout<< "Mozesz brac udzial w wyborach i mozesz kandydowac na prezydenta";
    }

    return 0;
}
