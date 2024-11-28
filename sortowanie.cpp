#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;


void wyswietlanie_tablicy(int tab[], int d) {
	for (int i = 0; i < d; i++) {
		cout << "element " << i << " tablicy: " << tab[i] << endl;
	}
}

int main() {
	srand(time(NULL));
	int rozmiar;
	cout << "podaj rozmiar" << endl;
	cin >> rozmiar;
	int* nowa = new int[rozmiar];

	for (int i = 0; i < rozmiar; i++) {
		nowa[i] = rand() % 1000 + 1;
	}

	wyswietlanie_tablicy(nowa, rozmiar);
	
}
