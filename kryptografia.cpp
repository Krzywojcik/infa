#include <stdio.h>
#include <fstream>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

string przesuniecie() {
	string linia;
	fstream szyfr;

	szyfr.open("szyfr.txt", ios::in);
	if (szyfr.good() == false) {
		cout << "Nie mozna znalezc pliku" << endl;
	getline(szyfr,linia)
	
	

	
	return slowo;

}

int main() {
	int kod;
	int x;
	fstream szyfr;

	cout << "Co chcesz zrobic: " << endl;
	cout << "1. zaszyfrowac" << endl;
	cout << "2. odszyfrowac" << endl;
	cin >> x;
	switch (x) {
	case 1:
		szyfr.open("szyfr.txt", ios::out);
		break;
	case 2:
		szyfr.open("szyfr.txt", ios::in);
		if (szyfr.good() == false) {
			cout << "Nie mozna znalezc pliku" << endl;
		}
		break;
	}
	int y;
	cout << "Wybierz szyfr: " << endl;
	cout << "1. Przesuniecie " << endl;
	cout << "2. metoda przestawiania" << endl;
	cin >> y;
	switch (y) {
	case 1:
		przesuniecie();
		break;
	}
	

	cin >> kod;
	szyfr << kod << endl;
}