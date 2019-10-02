#include <iostream>

using namespace std;

int populacja=1; int godziny=0;
int main()
{
    while (populacja<=1000000000)
    {
        godziny++;
        populacja=populacja*2;

        cout << "Minelo godzin: "<<godziny;
        cout<< " populacja wynosi: " <<populacja<< endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
