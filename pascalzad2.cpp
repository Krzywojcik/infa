#include <iostream>
using namespace std;

void bar() {
	double pa;

	cout << "Podaj liczbe Pascali ktore chcesz przeliczyc" << endl;
	cin >> pa;

	cout << pa << " to " << (pa/100000) << " bar" << endl;
}
void tor() {
	double pa;

	cout << "Podaj liczbe Pascali ktore chcesz przeliczyc" << endl;
	cin >> pa;

	cout << pa << " to " << (pa * 0.0075) << " tor" << endl;
}
void psi() {
	double pa;

	cout << "Podaj liczbe Pascali ktore chcesz przeliczyc" << endl;
	cin >> pa;


	cout << pa << " to " << ((pa * 145.038) / 1000000 )<< " psi" << endl;
}
int main() {
	int a;

	cout << "Podaj numer jednostki na jaka chcesz zamienic" << endl;
	cout << "1.bar" << endl;
	cout << "2.tor" << endl;
	cout << "3.psi" << endl;
	cout << "4.Wyjscie" << endl;

	cin >> a;

	switch (a) {
	case 1:

		bar();

		break;

	case 2:

		tor();

		break;
	case 3:

		psi();

		break;

	case 4:

		cout << "Wyjscie" << endl;

		return 0;
		break;
	default:
		cout << "podales zla liczbe" << endl;

	}
	return 0;
}