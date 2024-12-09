#include <iostream>

using namespace std;

void liczba_doskonala() {
	int liczba;
	cout << "Podaj liczbe" << endl;
	cin >> liczba;
	int suma = 0;
	for (int i = 1; i < liczba; i++) {
		if (liczba % i == 0) {
			suma += i;
		}
	}
	if (suma == liczba) {
		cout << "Liczba doskonala" << endl;

	}
	else {
		cout << " Liczba NIE jest doskonala" << endl;

	}
}


int rozmieniarka(){
    int x 
}

void automat() {
	cout << "Wybierz napoj" << endl;
	cout << "1. Woda (2 zl)" << endl;
	cout << "2. Cola (3 zl)" << endl;
	cout << "3. Sok (4 zl)" << endl;
	int cena;
	int moneta;
	int x;
	cin >> x;
	
	switch(x){
	    case 1:
	    cout << "Wrzuć 2 zl" << endl;
	    cena = 2;
	    break;
	     case 2:
	    cout << "Wrzuć 3 zl" << endl;
	    cena = 3;
	    break;
	     case 3:
	    cout << "Wrzuć 4 zl" << endl;
	    cena = 4;
	    break;
	    default:
	    cout << "Prosze wybrac poprawny numer" << endl;
	    break;
	}
	cin >> moneta;
	if(moneta == 1 || moneta == 2 || moneta == 5)
	{
	    
	  if(moneta - cena < 0)
	  {
	  cout <<"Za malo - dorzuc jeszcze: " << cena - moneta << " zl" << endl
	  }
}

int main() {
	//liczba_doskonala();
automat();
		return 0;
}
