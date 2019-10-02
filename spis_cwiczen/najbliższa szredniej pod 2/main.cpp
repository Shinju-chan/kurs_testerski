#include <iostream>

using namespace std;

float dane[5];
float roznice[5];
float suma, SR, wynik,mNW, mNM, a, b, c, d, x, e, f;



int main()
{
    for (int i=0; i<5; i++)
    {
        cout<<endl<<"Podaj "<<i+1<<" liczbe: ";
        cin >>dane[i];
        suma += dane [i];
    }
        SR = suma/5;

    mNW=dane[0];
    if (dane[1]>mNW) mNW=dane[1];
    if (dane[2]>mNW) mNW=dane[2];
    if (dane[3]>mNW) mNW=dane[3];
    if (dane[4]>mNW) mNW=dane[4];
   // cout<<"Najwieksza to"<<mNW<<endl;

        mNM=dane[0];
        if (dane[1]<mNM) mNM=dane[1];
        if (dane[2]<mNM) mNM=dane[2];
        if (dane[3]<mNM) mNM=dane[3];
        if (dane[4]<mNM) mNM=dane[4];
       // cout<<"Najmniejsza to"<<mNM<<endl;


    if (dane[0]>=SR && dane[0] <=mNW) a=dane[0];
    if (dane[1]>=SR && dane[1] <=mNW) a=dane[1];
    if (dane[2]>=SR && dane[2] <=mNW) a=dane[2];
    if (dane[3]>=SR && dane[3] <=mNW) a=dane[3];
    if (dane[4]>=SR && dane[4] <=mNW) a=dane[4];
   // cout<<" wieksza to: "<<a<<endl;

     if (dane[0]>=SR && dane[0] <=a) c=dane[0];
    if (dane[1]>=SR && dane[1] <=a) c=dane[1];
    if (dane[2]>=SR && dane[2] <=a) c=dane[2];
    if (dane[3]>=SR && dane[3] <=a) c=dane[3];
    if (dane[4]>=SR && dane[4] <=a) c=dane[4];
    // cout<<"Najblizsza wieksza to: "<<c<<endl;



   if (dane[0]<=SR && dane[0] >mNM) b=dane[0];
   if (dane[1]<=SR && dane[1] >mNM) b=dane[1];
   if (dane[2]<=SR && dane[2] >mNM) b=dane[2];
   if (dane[3]<=SR && dane[3] >mNM) b=dane[3];
   if (dane[4]<=SR && dane[4] >mNM) b=dane[4];

    if (dane[0]<=SR && dane[0] >b) d=dane[0];
   if (dane[1]<=SR && dane[1] >b) d=dane[1];
   if (dane[2]<=SR && dane[2] >b) d=dane[2];
   if (dane[3]<=SR && dane[3] >b) d=dane[3];
   if (dane[4]<=SR && dane[4] >b) d=dane[4];
   //cout<<"Najbli¿sza mniejsza to"<<d<<endl;
  // cout<<" mniejsza to"<<b<<endl;

 e=SR-d;
// cout<<"srednia a mniejsza"<<e<<endl;
 f=c-SR;
// cout<<"srednia a wieksza"<<f<<endl;
 if (e> f)
 {
     e=x, wynik=a ;
// cout<<"Ta ktorejszykasz to "<<wynik<<endl;
 }
 else
    {f=x, wynik=b;
 //cout<<"Ta ktorejszykasz to "<<wynik<<endl;
 }





        cout<<endl<< "Srednia tych liczb wynosi: "<<SR<<endl;
        cout<< endl<< "Najbardziej zblizona do sredniej jest liczba: "<<wynik;






    return 0;
}
