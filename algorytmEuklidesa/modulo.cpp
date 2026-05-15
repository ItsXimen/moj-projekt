#include <iostream>
using namespace std;

int NWD(int a,int b)
{
    while(b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
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