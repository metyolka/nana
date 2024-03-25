#include <iostream>
#include <string>
 
using namespace std;
 
// Struktura reprezentująca pojedynczą książkę
struct Ksiazka {
    string tytul;
    string autor;
    int rok;
    string wydawnictwo;
    double cena;
};
 
// Funkcja do wyszukiwania książek według podanej kategorii
void wyszukajKsiazki(const Ksiazka* ksiegarnia, int rozmiar, int wybor, const void* wartosc) {
    switch (wybor) {
        case 1: // Wyszukiwanie po roku
            {
                int* rok = (int*)wartosc;
                cout << "Znalezione ksiazki:"<<endl;
                for (int i = 0; i < rozmiar; ++i) {
                    if (ksiegarnia[i].rok >= *rok) {
                        cout << "Tytul:" << ksiegarnia[i].tytul <<endl;
                        cout<<"Autor:" << ksiegarnia[i].autor<<endl;
                        cout<< "Rok:" << ksiegarnia[i].rok <<endl;
                        cout<<"Wydawnictwo:" << ksiegarnia[i].wydawnictwo<<endl;
                        cout<< "Cena:" << ksiegarnia[i].cena << endl;
                    }
                }
            }
            break;
        case 2: // Wyszukiwanie po cenie
            {
                double* cena = (double*)wartosc;
                cout << "Znalezione ksiazki:"<<endl;
                for (int i = 0; i < rozmiar; ++i) {
                    if (ksiegarnia[i].cena > *cena) {
                        cout << "Tytul:" << ksiegarnia[i].tytul <<endl;
                        cout<<"Autor:" << ksiegarnia[i].autor<<endl;
                        cout<< "Rok:" << ksiegarnia[i].rok <<endl; 
                        cout<<"Wydawnictwo:" <<ksiegarnia[i].wydawnictwo<<endl;
                        cout<< "Cena:" << ksiegarnia[i].cena << endl;
                    }
                }
            }
            break;
        case 3: // Wyszukiwanie po wydawnictwie
            {
                string* wydawnictwo = (string*)wartosc;
                cout << "Znalezione ksiazki:";
                for (int i = 0; i < rozmiar; ++i) {
                    if (ksiegarnia[i].wydawnictwo == *wydawnictwo) {
                        cout << "Tytul:" << ksiegarnia[i].tytul <<endl;
                        cout<<"Autor:" << ksiegarnia[i].autor<<endl;
                        cout<< "Rok:" << ksiegarnia[i].rok <<endl;
                        cout<<"Wydawnictwo:" << ksiegarnia[i].wydawnictwo<<endl;
                        cout<< "Cena:" << ksiegarnia[i].cena << endl;
                    }
                }
            }
            break;
        default:
            cout << "Niepoprawny wybor kategorii!"<<endl;
    }
}
 
int main() {
    Ksiazka ksiegarnia[7] = {
        { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
        { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
        { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
        { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
        { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
        { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
        { "Tytul7", "autor1", 1931, "Helion1", 29.54 }
    };
 
    int wybor;
    do {
        cout << "Witaj w ksiegarnii"<<endl;
        cout << "Po jakiej kategorii chcial bys wyszukac ksiazke:"<<endl;
        cout << "1. Rok wydania"<<endl;
        cout << "2. Cena"<<endl;
        cout << "3. Wydawnictwo"<<endl;
        cout << "0. Wyjscie"<<endl;
        cin >> wybor;
 
        if (wybor != 0) {
            if (wybor == 1 || wybor == 2 || wybor == 3) {
                if (wybor == 1) {
                    int rok;
                    cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
                    cin >> rok;
                    wyszukajKsiazki(ksiegarnia, 7, wybor, &rok);
                } else if (wybor == 2) {
                    double cena;
                    cout << "Podaj cene od ktorej chcesz zobaczyc ksiazki: ";
                    cin >> cena;
                    wyszukajKsiazki(ksiegarnia, 7, wybor, &cena);
                } else {
                    string wydawnictwo;
                    cout << "Podaj wydawnictwo, ktorego ksiazki chcesz zobaczyc: ";
                    cin >> wydawnictwo;
                    wyszukajKsiazki(ksiegarnia, 7, wybor, &wydawnictwo);
                }
            } else {
                cout << "Niepoprawny wybor kategorii!\n";
            }
        }
    } while (wybor != 0);
 
    return 0;
}