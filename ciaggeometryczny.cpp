#include <iostream>
using namespace std;

void CiagGeometryczny(int a, int q) {
	int i;
	long long wyraz[2];

	for (i = 0; i < 100; i++) {

		wyraz[0] = i + 1;
		wyraz[1] = a * (pow(q,i));
		cout << wyraz[0] << ":" << wyraz[1] << endl;
	}
}


int main() {

	CiagGeometryczny(2, 2);
	return 0;
}