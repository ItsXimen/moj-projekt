#include <iostream>
using namespace std;

unsigned long long silnia(int a)
{
    unsigned long long wynik = 1;

    for(int i = 1; i <= a; i++)
    {
        wynik *= i;
    }

    return wynik;
}

int main()
{
    int liczba1;
    cout << "Podaj liczbe: ";
    cin >> liczba1;


    cout << "Wynik: " << silnia(liczba1) << endl;
}