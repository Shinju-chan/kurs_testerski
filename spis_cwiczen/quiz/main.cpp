#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;


string temat, nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna[5];
string odp;
int punkty=0;



int main()
{
    int nr_linii=1;
    string linia;
    int nr_pyt=0;

    fstream plik;
    plik.open("quiz.txt", ios::in);

    if(plik.good()==false)
    {
        cout<<"Nie ma takiego pliku!";
        exit (0);
    }

    while (getline(plik,linia))
    {
        switch(nr_linii)
        {
            case 1: temat                   =linia;     break;
            case 2: nick                    =linia;     break;
            case 3 : tresc      [nr_pyt]    = linia;    break;
            case 4 : odpA       [nr_pyt]    = linia;    break;
            case 5 : odpB       [nr_pyt]    = linia;    break;
            case 6 : odpC       [nr_pyt]    = linia;    break;
            case 7 : odpD       [nr_pyt]    = linia;    break;
            case 8 : poprawna   [nr_pyt]    = linia;    break;
        }

        if (nr_linii==8) {nr_linii=2; nr_pyt++;}
        nr_linii++;

    }

    plik.close();

    for (int i=0; i<=4; i++)
    {
        cout<<endl<<tresc[i]<<endl;
        cout<<"A. "<<odpA[i]<<endl;
        cout<<"B. "<<odpB[i]<<endl;
        cout<<"C. "<<odpC[i]<<endl;
        cout<<"D. "<<odpD[i]<<endl;

        cout<<"Twoja odpowiedz: ";
        cin>>odp;

        transform(odp.begin(),odp.end(),odp.begin(), ::tolower);

        if (odp==poprawna[i])
        {
          cout<<"OdpowiedŸ poprawna. Zdobywasz punkt";
        punkty++;
        }

        else cout<<"OdpowiedŸ niepoprawna, brak punktu.Prawidlowan odpowiedz to: "<<poprawna[i]<<endl;

    }

    cout<<endl<<"Koniec quizu! Zdobytepunkty: "<<punkty;
    return 0;
}
