#include <iostream>

using namespace std;

void rozkladNaCzynnikiPierwsze(int n) {

    for (int i = 2; i <= n; ++i) {

    while (n % i == 0) {

            cout << i << " "<<endl;

            n /= i;

        }

    }

}
 
int main() {

    int liczba;

    cout << "Podaj liczbe: ";

    cin >> liczba;
 
    cout << "Czynniki pierwsze liczby " << liczba << ": "<<endl;

    rozkladNaCzynnikiPierwsze(liczba);
 
    return 0;

}