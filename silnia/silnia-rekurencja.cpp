#include <iostream>
using namespace std;

int silnia(int a)
{
    if(a <= 0) return 1;
    else return a * silnia(a-1);
}

int main()
{
    int liczba1;
    cout << "Podaj liczbe: ";
    cin >> liczba1;


    cout << "Wynik: " << silnia(liczba1) << endl;
}