#include <iostream>

using namespace std;

int nogi(int kurczaki, int krowy, int swinie) {

	return (kurczaki * 2 + krowy * 4 + swinie * 4);

}

int main() {
	
	int kurczaki;
	int krowy;
	int swinie;
	
	cout << "Podaj liczbe kurczakow,krow,swini" << endl;

	cin >> kurczaki, krowy, swinie;

	cout << "Jest " << nogi(kurczaki krowy swinie) << "n�g" << endl;

	return 0;

}
