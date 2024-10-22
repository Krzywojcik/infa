#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int n;
int m;

void kpn(int n, int m) {

	if (n == m) {

		cout << "remis" << endl;
	}
	else if ((n == 3 && m == 2) || (n == 2 && m == 1) || (n == 1 && m == 3)) {

		cout << "wygrana" << endl;
	}
	else {
		cout << "przegrywasz" << endl;
	}
}
	
int main() {
	
	cout << "Wybierz swoj ruch od 1 do 3" << endl;
	cout << "1.kamien" << endl;
	cout << "2.papier" << endl;
	cout << "3.nozyce" << endl;

	cin >> n;

	if ((n > 3) || (n < 1)) {
		cout << "Podano zla liczbe" << endl;
		return 0;
	}

	srand(time(NULL));
	m = (rand() % 3) + 1;

	cout << "wybrales: ";
	if (n == 1) cout << "kamien" << endl;
	else if (n == 2) cout << "papier" << endl;
	else if (n == 3) cout << "nozyce" << endl;

	cout << "komputer wybral: ";
	if (m == 1) cout << "kamien" << endl;
	else if (m == 2) cout << "papier" << endl;
	else if (m == 3) cout << "nozyce" << endl;
	kpn(n, m);
	

	return 0;
}