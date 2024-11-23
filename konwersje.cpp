#include <iostream>
#include <cmath>

using namespace std;


int liczba_to_dec(string liczba, int podstawa) {
	int wynik = 0;
	int i;
	int cyfra;
	int d = liczba.length(); //liczy ilosc cyfr liczby
	for (i = 0; i < d; i++) {
		cyfra = liczba[d - 1 - i] - 48; // -48 wynika z ASCII
			if (cyfra <= 9) {
				wynik += cyfra * pow(podstawa, i);
			}
			else {
				wynik += (cyfra - 7) * pow(podstawa, i); //to dotyczy systemu hex bo mamy A-F czyli dodatkowo trzeba odj¹æ 7
			}
	}
	return wynik;
}

string dec_to_docelowy(int liczba, int podstawa){
	string wynik = "";
	int reszta;
	if (liczba == 0) {
		wynik = "0";
	}
	while (liczba > 0) {
		reszta = liczba % podstawa;
		if (reszta < 10) {
			wynik = char(reszta + 48) + wynik; //char zeby z ASCII wziac wartosc reszty bo inaczej mamy int + string
		}
		else {
			wynik = char(reszta + 48 + 7) + wynik;
			liczba /= podstawa;
		}
		return wynik;
	}
}
int main() {
	int podstawa;
	string liczba;
	int DocelowySys;
	int wynik;

	cout << "w jakim systemie jest ta liczba? (2,8,10,16)" << endl;
	cin >> podstawa;
	cout << "Podaj liczbe" << endl;
	cin >> liczba;

	liczba_to_dec(liczba,podstawa);

	cout << "Podaj system docelowy" << endl;
	cin >> DocelowySys;
	
	dec_to_docelowy(wynik,DocelowySys);

	cout << "Liczba: "  << liczba << " z systemu " << podstawa << "w systemie " << DocelowySys << " to " << wynik << endl;
	cout << "4.heksadecymalny" << endl;

	cout << 1 % 2 << endl;

	}
