#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Podaj numer dnia tygodnia od 1 do 7" << endl;
	cin >> a;
	switch (a) {
	case 1:
		cout << "poniedzialek" << endl;
		break;
	case 2:
		cout << "wtorek" << endl;
		break;
	case 3:
		cout << "sroda" << endl;
		break;
	case 4:
		cout << "czwartek" << endl;
		break;
	case 5:
		cout << "piatek" << endl;
		break;
	case 6:
		cout << "sobota" << endl;
		break;
	case 7:
		cout << "niedziela" << endl;
		break;
	default:
		cout << "podales zla liczbe" << endl;

	}
	return 0;
}
