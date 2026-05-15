#include <iostream>
using namespace std;

int NWD(int a,int b)
{
    while(a != b) {
        if(a > b) a = a - b;
        else b = b - a;
    }
    return a;
}

int main()
{
    int liczba1, liczba2;
    cout << "Podaj liczbe: ";
    cin >> liczba1;
    cout << "Podaj liczbe: ";
    cin >> liczba2;

    cout << "Wynik: " << NWD(liczba1, liczba2) << endl;
}