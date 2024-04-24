#include <iostream>
using namespace std;

int main() {
    int tab[] = {2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
    int szukana;
    cout << "Jaka liczbe poszukujesz: ";
    cin >> szukana;
    int liczby[25]; 
    int index = 0;

    for (int i = 0; i < sizeof(tab) / sizeof(tab[0]); ++i) {
        if (tab[i] == szukana) {
            liczby[index] = i;
            index++;
        }
    }
   cout << "Poszukiwana liczba znajduje sie na pozycji: ";
    for (int i = 0; i < index; ++i) {
        cout << liczby[i];
        if (i != index - 1)
            cout << ", ";
    }
cout << endl;

    return 0;
}