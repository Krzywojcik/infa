#include <iostream>
using namespace std;

int main() {
	int liczba1; int liczba2; 
	cout << "Podaj pierwsza liczbe z przedzialu" << endl;
	cin >> liczba1;

	cout << "Podaj druga liczbe z przedzialu" << endl;
	cin >> liczba2;

	cout << "Liczby z przedzialu(" << liczba1 << ", " << liczba2 << ") to: " << endl;
	   
	for (int i = liczba1+1; i < liczba2; i++) {
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

	return 0;
}
