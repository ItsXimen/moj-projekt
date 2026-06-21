#include <iostream>
#include <string>
#include <cstdlib> // Potrzebne do system("clear")
using namespace std;

class Pokemon {
    private:
        string name;
        int maxHp;
        int currentHp; // NOWOŚĆ: Śledzimy aktualne zdrowie
        int attack;
    public:
        Pokemon(string n, int h, int a) {
            name = n;
            maxHp = h;
            currentHp = h; // Na początku aktualne HP = maksymalne HP
            attack = a;
        }
        ~Pokemon() {}

        void getInfo() {
            cout << "===Pokemon===" << endl;
            cout << "Nazwa: " << name << endl;
            cout << "HP: " << currentHp << "/" << maxHp << endl;
            cout << "Atak: " << attack << endl << endl;
        }

        string getName() { return name; }
        int getHp() { return currentHp; }
        int getAttack() { return attack; }
        
        // Funkcja do zadawania obrażeń
        void takeDamage(int dmg) {
            currentHp -= dmg;
            if (currentHp < 0) currentHp = 0; // Zdrowie nie powinno być ujemne
        }
};

// Przeniosłem symulator walki poza klasę jako osobną funkcję globalną
void symulatorWalki(Pokemon &p, Pokemon &q) {
    cout << "=== Walka Pokemon: " << p.getName() << " VS " << q.getName() << " ===" << endl << endl;
    
    // Walka trwa dopóki oba Pokemony mają HP większe od 0
    while(p.getHp() > 0 && q.getHp() > 0) {

        // Runda 1: Pierwszy Pokemon atakuje drugiego
        q.takeDamage(p.getAttack());
        cout << p.getName() << " atakuje " << q.getName() << " za " << p.getAttack() << " HP!" << endl;
        cout << q.getName() << " pozostalo: " << q.getHp() << " HP" << endl << endl;

        // Sprawdzamy, czy drugi Pokemon przeżył, żeby móc oddać
        if (q.getHp() <= 0) break;

        // Runda 2: Drugi Pokemon odpowiada
        p.takeDamage(q.getAttack());
        cout << q.getName() << " atakuje " << p.getName() << " za " << q.getAttack() << " HP!" << endl;
        cout << p.getName() << " pozostalo: " << p.getHp() << " HP" << endl << endl;
        
        cout << "---------------------------------------" << endl;
    }

    // Wynik walki
    if(p.getHp() > 0 && q.getHp() <= 0) {
        cout << p.getName() << " wygrywa walke!" << endl;
    }
    else if(q.getHp() > 0 && p.getHp() <= 0) {
        cout << q.getName() << " wygrywa walke!" << endl;
    }
    else {
        cout << "REMIS!" << endl;
    }
}

int main() {
    system("clear");

    Pokemon p1("Gengar", 60, 80);
    Pokemon p2("Nidorino", 100, 40);

    p1.getInfo();
    p2.getInfo();

    // Wywołanie symulatora walki
    symulatorWalki(p1, p2);
    
    return 0;
}