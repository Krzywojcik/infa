#include <iostream>
using namespace std;

void CiagArytmetyczny(int a, int r) {
	int i;
	int wyraz[2];

	for (i = 0; i < 100; i++) {

		wyraz[0] = i + 1;
		wyraz[1] = a + i * r;
		cout << wyraz[0] << ":" << wyraz[1] << endl;
	}
}


int main() {
	
	CiagArytmetyczny(1, 6);
	return 0;
}