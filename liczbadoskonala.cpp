#include <iostream>

using namespace std;

void liczba_doskonala() {
	int liczba;
	cout << "Podaj liczbe" << endl;
	cin >> liczba;
	int suma = 0;
	for (int i = 1; i < liczba; i++) {
		if (liczba % i == 0) {
			suma += i;
		}
	}
	if (suma == liczba) {
		cout << "Liczba doskonala" << endl;

	}
	else {
		cout << " Liczba NIE jest doskonala" << endl;

	}
}

void automat() {
	cout << "Wybierz napoj" << endl;
}

int main() {
	liczba_doskonala();

		return 0;
}
