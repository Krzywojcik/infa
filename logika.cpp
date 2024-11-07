#include <iostream>
using namespace std;


bool implikacja(bool p, bool q) {
	if (p == true && q == true) {
		return true;
	}
	else if (p == false && q == true) {
		return true;
	}
	else if (p == false && q == false) {
		return true;
	}
	else if (p == true && q == false) {
		return false;
	}
}

bool rownowaznosc(bool p, bool q) {
	if (p == true && q == true) {
		return true;
	}
	else if (p == false && q == false) {
		return true;
	}
	else if (p == false && q == true) {
		return false;
	}
	else if (p == true && q == false) {
		return false;
	}
}

int main() {

	bool p;
	bool q;

	cout << "Podaj wartosc logiczna pierwszego zdania (0,1)" << endl;
	cin >> p;

	cout << "Podaj wartosc logiczna drugiego zdania (0,1)" << endl;
	cin >> q;

	cout << "Wartosc logiczna pierwszego zdania wynosi: " << p << endl;
	cout << "Wartosc logiczna drugiego zdania wynosi: " << q << endl;

	//negacja

	cout << "Negacja p wynosi: " << !p << endl;
	cout << "Negacja q wynosi: " << !q << endl;

	//koniunkcja

	cout << "Koniunkcja p i q wynosi: " << (p && q) << endl;

	//alternatywa

	cout << "alternatywa p i q wynosi: " << (p || q) << endl;

	//implikacja

	if (implikacja(p, q) == true) {
		cout << "Implikacja wynosi: " << true << endl;
	}
	else {
		cout << "Implikacja wynosi: " << false << endl;
	}
	
    // rownowaznosc

	if (rownowaznosc(p, q) == true) {
		cout << "rownowartosc wynosi: " << true << endl;
	}
	else {
		cout << "rownowartosc wynosi: " << false << endl;
	}

	return 0;
}