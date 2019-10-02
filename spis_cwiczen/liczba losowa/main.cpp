#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>


using namespace std;

int liczba, strzal, ile=0;

int main()
{
    cout << "Witaj. Pomyslalem liczbe od 1 do 100." << endl;
    srand(time(NULL));
    liczba = rand ()%100+1;


    while(strzal!=liczba)
    {
        ile++;
        cout <<"Zgadnij jaka to liczba (to Twoja "<<ile<<" proba)" <<endl;
        cin >> strzal;
        if   (strzal==liczba)
            cout<<"Zgadles. Gratulacje - wygrywasz w "<<ile<< " probie" <<endl;
        else if (strzal<liczba)
            cout<<"To za malo."<<endl;
        else if  (strzal>liczba)
            cout<<"To za duzo."<<endl;
    }

    getchar();getchar();
    return 0;
}
