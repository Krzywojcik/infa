#include <iostream>
using namespace std;

int main() {
	int liczba; int min_liczba; int max_liczba; int i; int roznica;

	cout << "Podaj liczby" << endl; // ustawiamy pierwszą wpisaną liczbe jako max i min
	cin >> liczba;

	min_liczba = liczba;
	max_liczba = liczba;


	for (i = 0; i < 4; i++) { // 4-krotnie wpisujemy liczby 

		cin >> liczba;

		if (liczba > max_liczba) { // sprawdzamy czy wpisana liczba jest większa od poprzednio podanej. 

			max_liczba = liczba; // Jeżeli tak to ustawaimy ją jako max
		}
		if (liczba < min_liczba) { // sprawdzamy czy wpisana liczba jest mniejsza od poprzednio podanej.

			min_liczba = liczba; // Jeżeli tak to ustawaimy ją jako min
		}
	}
	
        roznica = max_liczba - min_liczba;
	
	cout << "najmniejsza liczba to " << min_liczba << endl; // wypisujemy wyniki
	cout << "najwieksza liczba to " << max_liczba << endl;
	cout << "roznica liczb to " << roznica << endl;

	return 0;
}
