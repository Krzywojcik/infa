#include <iostream>
using namespace std;

int LiczbyPitagorejskie(int a, int b, int c) {
	if (a * a + b * b == c * c) {
		return 1;
	}
	else if (a * a + c * c == b * b) {
		return 1;
	}
	else if (b * b + c * c == a * a){
		return 1;
}
	else {
		return 0;
	}
	}


int main() {
	int a;
	int b;
	int c;

	cout << "Podaj pierwsza liczbe" << endl;

	cin >> a;

	cout << "Podaj druga liczbe" << endl;

	cin >> b;

	cout << "Podaj trzecia liczbe" << endl;

	cin >> c;
	
	cout << "\n" << endl;
	cout << LiczbyPitagorejskie(a, b, c) << endl;


	return 0;
}
