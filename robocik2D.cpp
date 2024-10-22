#include <iostream>

using namespace std;

int main() {

	int pozycja[2] = { 0,0 };
	int a;


	cout << "Robocik porusza sie na polnoc. Podaj odleglosc na jaka sie przemieszcza" << endl;

	cin >> a;

	pozycja[1] += a;

	cout << "Robocik porusza sie na wschod. Podaj odleglosc na jaka sie przemieszcza" << endl;

	cin >> a;

	pozycja[0] += a;

	cout << "Robocik porusza sie na poludnie. Podaj odleglosc na jaka sie przemieszcza" << endl;

	cin >> a;

	pozycja[1] -= a;

	cout << "Robocik porusza sie na zachod. Podaj odleglosc na jaka sie przemieszcza" << endl;

	cin >> a;

	pozycja[0] -= a;

	cout << "Robocik skoñczy³ w po³o¿eniu (" << pozycja[0] << "," << pozycja[1] << ")" << endl;


	return 0;
}