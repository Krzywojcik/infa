#include <iostream>
#include <cstdlib> 
#include <ctime>
#include < windows.h >
using namespace std;

int n;
int m;


int main() {

	cout << "Witamy w losowaniu Totolotek! Nastepuje zwolnienie blokady" << endl;
	srand(time(NULL));
	n = (rand() % 49 + 1);
	cout << "1. liczba to: " << n << endl;
	Sleep(5000);
	n = (rand() % 49 + 1);
	cout << "2. liczba to: " << n << endl;
	Sleep(5000);
	n = (rand() % 49 + 1);
	cout << "3. liczba to: " << n << endl;
	Sleep(5000);
	n = (rand() % 49 + 1);
	cout << "4. liczba to: " << n << endl;
	Sleep(5000);
	n = (rand() % 49 + 1);
	cout << "5. liczba to: " << n << endl;
	Sleep(5000);
	n = (rand() % 49 + 1);
	cout << "6. liczba to: " << n << endl;
	cout << "Zyczymy najwiekszych wygranych!" << endl;


	return 0;
}