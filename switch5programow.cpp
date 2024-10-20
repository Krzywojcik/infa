#include <iostream>
using namespace std;

void rokprzestepny() {

		int rok;
		cout << "podaj rok" << endl;
		cin >> rok;
		if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0) {
			cout << " Rok przestepny" << endl;
		}
		else {
			cout << "Rok NIE jest przestepny" << endl;
		}
	}

void liczbyzprzedzialu() {

	int liczba1; int liczba2;
	cout << "Podaj pierwsza liczbe z przedzialu" << endl;
	cin >> liczba1;

	cout << "Podaj druga liczbe z przedzialu" << endl;
	cin >> liczba2;

	cout << "Liczby z przedzialu(" << liczba1 << ", " << liczba2 << ") to: " << endl;

	for (int i = liczba1 + 1; i < liczba2; i++) {
		cout << i << endl;
	}

	cout << "suma liczb parzystych z tego przedzialu to: " << endl;
	int a = 0; int i;
	if ((liczba1 + 1) % 2 == 0) {
		for (i = liczba1 + 1; i < liczba2; i = i + 2)
			a = a + i;
	}
	else {
		for (i = liczba1 + 2; i < liczba2; i = i + 2)
			a = a + i;
	}
	cout << a << endl;
}

void minmax() {

	int liczba; int min_liczba; int max_liczba; int i; int roznica;

	cout << "Podaj liczby" << endl; 
	cin >> liczba;

	min_liczba = liczba;
	max_liczba = liczba;


	for (i = 0; i < 4; i++) {

		cin >> liczba;

		if (liczba > max_liczba) { 

			max_liczba = liczba; 
		}
		if (liczba < min_liczba) { 

			min_liczba = liczba; 
		}
	}

	roznica = max_liczba - min_liczba;

	cout << "najmniejsza liczba to " << min_liczba << endl; 
	cout << "najwieksza liczba to " << max_liczba << endl;
	cout << "roznica liczb to " << roznica << endl;
}

void nliczbzera() {

	int n; int i; int liczba; int suma; int srednia;

	cout << "Podaj ile liczb zamierzasz wpisac" << endl;

	cin >> n;

	suma = 0;

	for (i = 0; i < n; i++) {

		cout << "Podaj liczbe" << endl;
		cin >> liczba;

		suma = suma + liczba;
	}

	srednia = suma / n;

	cout << "srednia wynosi " << srednia << endl;

	for (i = 0; i < srednia; i++) {
		cout << "0";

	}
}

int main() {
	int a;
	cout << "Podaj numer zadania od 1 do 5" << endl;
	cout << "1. Sprawdz rok przestepny" << endl;
	cout << "2. Liczby w przedziale" << endl;
	cout << "3. Najwieksza i najmniejsza liczba" << endl;
	cout << "4. Srednia liczb i liczba zer" << endl;
	cout << "5. Wyjscie" << endl;
	cin >> a;

	switch (a) {
	case 1:

		rokprzestepny();

			break;

	case 2:

		liczbyzprzedzialu();

		    break;
	case 3:

		minmax();

		    break;
	case 4:

		nliczbzera();

		    break;
	case 5:

		cout << "Wyjscie" << endl;

		return 0;

		   break;
	default:
		cout << "podales zla liczbe" << endl;

		}
		return 0;
	}
