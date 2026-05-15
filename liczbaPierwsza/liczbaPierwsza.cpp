#include <iostream>
using namespace std;

bool czyPierwsza(int a)
{
    if(a < 2) return false;

    for(int i = 2; i*i <= a; i++)
    {
        if(a % i == 0) return false;
    }
    return true;
}

int main()
{
    int liczba1;
    cout << "Podaj liczbe: ";
    cin >> liczba1;


    if(czyPierwsza(liczba1))
    {
        cout << "Liczba jest pierwsza." << endl;
    }
    else
    {
        cout << "Liczba nie jest pierwsza." << endl;
    }
}