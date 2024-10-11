#include <iostream>
using namespace std;

int main() {
	int a; int b; int c; int d; int e; int max;
	cout << "Podaj pierwsza liczbe" << endl;
	cin >> a;
	cout << "Podaj druga liczbe" << endl;
	cin >> b;
	cout << "Podaj trzecia liczbe" << endl;
	cin >> c;
	cout << "Podaj czwarta liczbe" << endl;
	cin >> d;
	cout << "Podaj piata liczbe" << endl;
	cin >> e;
	
	if (a < b) {
		max = b;
	}
	else if (a < c) {
		max = c;
	}
	else if (a < d) {
		max = d;
	}
	else if (a < e) {
		max = e;
	}
	else max = a;
	cout << "najwieksza liczba to " << i << endl;
	return 0;
}
