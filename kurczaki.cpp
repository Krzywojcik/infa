#include <iostream>

using namespace std;

int nogi(int kurczaki, int krowy, int swinie) {

	return (kurczaki * 2 + krowy * 4 + swinie * 4);
}

int main() {

	int kurczaki;
	int krowy;
	int swinie;

	cout << "Podaj liczbe kurczakow" << endl;

	cin >> kurczaki;

	cout << "Podaj liczbe krow" << endl;

	cin >> krowy;

	cout << "Podaj liczbe swini" << endl;

	cin >> swinie;

	cout << "Ilosc nog wynosi " << nogi(kurczaki, krowy, swinie) << endl;

	return 0;

}
