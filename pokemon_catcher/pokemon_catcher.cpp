#include <iostream>
#include <string>
using namespace std;

class Pokemon {
    private:
        string name;
        int level;
    public:
        //konstruktor
        Pokemon(string n, int l) {
            name = n;
            level = l;
        }
        //destruktor
        ~Pokemon() {}

        void getInfo() {
            cout << "===Pokemon===" << endl;
            cout << "Nazwa: " << name << endl;
            cout << "Poziom: " << level << endl << endl;
        }

        string getName() {
            return name;
        }
        int getLevel() {
            return level;
        }
};

class Trainer {
    private:
        string name;
        int pokeballs;
    public:
        //konstruktor
        Trainer(string n, int p) {
            name = n;
            pokeballs = p;
        }
        //destruktor
        ~Trainer() {}

        void getInfo() {
            cout << "===Karta Trenera===" << endl;
            cout << "Imie: " << name << endl;
            cout << "Ilosc pokeballs: " << pokeballs << endl << endl;
        }

        string getName() {
            return name;
        }

        int getPokeballs() {
            return pokeballs;
        }

        void zlapPokemona(Pokemon &p) {
            if(pokeballs > 0) {
                pokeballs--;
                cout << "Zlapano " << p.getName() << " na poziomie " << p.getLevel() << endl;
            }
            else {
                cout << "Brak Pokeballs! " << p.getName() << " uciekl!" << endl;
            }
        }
};

int main() {
    
    system("clear");

    //Stworzenie trenera:
    Trainer ash("Ash", 3);
    //Stworzenie Pokemonow: 
    Pokemon pikachu("Pikachu", 5);
    Pokemon charmander("Charmander", 12);
    Pokemon snorlax("Snorlax", 25);
    Pokemon spearow("Spearow", 3);
    //Wywolanie metody zlapPokemona()
    ash.zlapPokemona(pikachu);
    ash.zlapPokemona(charmander);
    ash.zlapPokemona(snorlax);
    ash.zlapPokemona(spearow);

    return 0;
}