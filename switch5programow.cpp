#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Podaj numer zadania od 1 do 4, jesli chesz wyjsc wpisz 5" << endl;
	cin >> a;
	
	switch (a) {
	case 1:

		int main(); {
			int rok;
			cout << "podaj rok" << endl;
			cin >> rok;
			if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0) {
				cout << " Rok przestepny" << endl;
			}
			else {
				cout << "Rok NIE jest przestepny" << endl;
			}

			return 0;
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
	default:
		cout << "podales zla liczbe" << endl;

	}
	return 0;
}