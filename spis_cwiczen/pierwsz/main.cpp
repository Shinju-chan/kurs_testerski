#include <iostream>

using namespace std;

int uczniowie, cukierki, x,y;
int main()

{
    cout << "Ilu jest uczniow? :";
    cin >> uczniowie;
    cout << "Ilemasz cukierkow? :";
    cin >>cukierki;

    x=cukierki/(uczniowie-1);

    cout << "Dla kazdego ucznia bedzie "<<x<< " cukierkow.";

    y= cukierki-x*(uczniowie-1);

     cout <<endl<< "Zostanie Ci "<<y<< " cukierkow.";

    return 0;
}
