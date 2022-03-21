#include <iostream>
using namespace std;

int main() {
    int n, p;
    int dz = 0; //zmienna dzielnik
    cout << "Podaj liczbę naturalną: "; 
    cin >>n; 
    for (p=1; p<n; p++) {
        cout << n << " : " << p << " | Reszta z dzielenia: " << n % p << "\n"; //komunikat
        if (n % p == 0) {
            dz++;
            //jeżeli liczba naturalna jest podzielna przez zmienną p, dodaj 1 do zmiennej dz
        }
    }
    if (dz > 2) cout << n << " jest liczbą złożoną";
    else cout << n << " jest liczbą pierwsza";
    //jeżeli zmienna dz jest większa od 2, pokaż komunikat o liczbie złożonej; w przeciwnym razie pokaż komunikat o liczbie pierwszej
    exit(0);
}
