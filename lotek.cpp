#include <iostream>
#include <cstdlib> 
#include <ctime>
#include < windows.h >
using namespace std;


void totolotek() {
	int i;
	cout << "Witamy w losowaniu Totolotek! Nastepuje zwolnienie blokady" << endl;
	srand(time(NULL));
	for (i = 1; i <= 5; i++) {
		cout << i << " liczba to: " << rand() % 49 + 1 << endl;
		Sleep(1000);
	}
	cout << "Zyczymy najwiekszych wygranych!" << endl;

}

int main() {
	
	totolotek();

	return 0;
}
