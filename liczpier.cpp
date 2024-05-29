#include <iostream>
using namespace std;
int main() {
   // Pobranie liczby n, określającej ile liczb pierwszych chcemy wygenerować.
   int n;
   cout << "Ile liczb pierwszych chcesz wyswietlic: ";
   cin >> n;
   // Inicjalizacja zmiennych pomocniczych
   int lp = 0;  // licznik wygenerowanych liczb pierwszych, początkowo zero
   int p = 2;   // liczba, którą będziemy testować, początkowo 2 
   // Pętla główna generująca liczby pierwsze, dopóki lp < n
   cout << "Liczby pierwsze: ";
   while (lp < n) {
       bool slay = true; // p jest liczbą pierwszą
       // Pętla sprawdzająca podzielność liczby p
       // Sprawdzamy podzielność p przez każdą liczbę d od 2 do p - 1
       for (int d = 2; d <= p - 1; d++) {
           if (p % d == 0) {
               // Jeśli p jest podzielne przez d, ustawiamy isPrime na false
               slay = false;
               break; // przerywamy pętlę, bo znaleźliśmy dowód, że p nie jest pierwsze
           }
       }
       // Krok 6: Jeśli p jest liczbą pierwszą 
       if (slay) {
           // Wypisujemy liczbę pierwszą p
           cout << p << " ";
           // Zwiększamy licznik wygenerowanych liczb pierwszych
           lp++;
       }
       // Krok 7: Przechodzimy do kolejnej liczby, kandydata na liczbę pierwszą
       p++;
   }
   // Krok 8: Kończymy program i przechodzimy do nowej linii
   cout << endl;
   return 0;
}
