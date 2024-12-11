#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

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
	cout << "1. Woda (2 zl)" << endl;
	cout << "2. Cola (3 zl)" << endl;
	cout << "3. Sok (4 zl)" << endl;
	int cena = 0;
	int moneta;
	int x;
	cin >> x;

	switch (x) {
	case 1:
		cout << "Wrzuc 2 zl" << endl;
		cena = 2;
		break;
	case 2:
		cout << "Wrzuc 3 zl" << endl;
		cena = 3;
		break;
	case 3:
		cout << "Wrzuc 4 zl" << endl;
		cena = 4;
		break;
	default:
		cout << "Prosze wybrac poprawny numer" << endl;
		break;
	}


	while (cena > 0) {

		cin >> moneta;
		if (moneta != 1 && moneta != 2 && moneta != 5) {
			cout << "Prosze wrzucic monete 1,2 lub 5 zlotowa" << endl;
			continue;
		}
		cena -= moneta;

		if (cena > 0) {
			cout << "Za malo! Dorzuc jeszcze: " << cena << " zl" << endl;
		}
		if (cena < 0) {
			cout << "Oto twoja reszta: " << -cena << endl;
		}
	}
	cout << "Dziekujemy za zakup!" << endl;
}


void labirynt() {
	srand(time(NULL));

	const int n = 10;
	char labirynt[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (rand() % 2 == 0) {
				labirynt[i][j] = '#';
			}
			else {
				labirynt[i][j] = '.';
			}
		}
	}

	labirynt[0][0] = '.';
	labirynt[9][9] = '.';

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << labirynt[i][j] << " ";
		}
		cout << endl;
	}

}


void kostka() {
	srand(time(NULL));
	int rzuty;
	int* tablica;
	int oczka;
	int suma = 0;
	int wystapienia[6] = { 0 };
	cout << "Podaj ilosc rzutow kostka: " << endl;
	cin >> rzuty;

	tablica = new int[rzuty];

	for (int i = 0; i < rzuty; i++) {
		oczka = rand() % 6 + 1;
		tablica[i] = oczka;
		suma += oczka;
		wystapienia[oczka - 1]++;
	}

	for (int i = 0; i < rzuty; i++) {
		cout << i + 1 << ". Rzut wynosi: " << tablica[i] << endl;

	}
	cout << "Suma wyrzuconych oczek wynosi: " << suma << endl;
	cout << "Liczba wystapien:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << i + 1 << ": " << wystapienia[i] << " razy" << endl;
	}
	delete[] tablica;
}


void quiz() {

}

int main() {

	//liczba_doskonala();
	//automat();
	//labirynt();
	//kostka();
	return 0;
}
