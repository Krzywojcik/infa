#include <iostream>
using namespace std;

int main() {
	int n; int a; int b;
	

	cout << "Podaj liczbe wyrazow ciagu fibonacciego do wyswietlenia" << endl;

	cin >> n;

	a = 0; b = 1;

	int i;
	int suma;
	cout << "Ciag Fibonacciego: ";
	for (i = 0; i < n; i++) {
		cout << a << " ";
		suma = a + b;
		a = b;
		b = suma;
	}
	cout << endl;
	return 0;
}