#include <iostream>
using namespace std;

int main() {
	int liczba1; int liczba2; int min_liczba; int max_liczba; int i;int roznica;
	cout << "Podaj liczby" << endl;
	cin >> liczba1; 

	liczba1 = min_liczba;
	liczba1 = max_liczba;

     cin >> liczba2;

for (i=0;i<5;i++)

  if (liczba2 > liczba1){

	liczba2 = max_liczba;
}
  if (liczba2 < liczba1){

    liczba2 = min_liczba;
}

roznica = max_liczba - min_liczba;
cout << "najmniejsza liczba to " << min_liczba << endl;
cout << "najwieksza liczba to " << max_liczba << endl;
cout << "roznica liczb to " << roznica << endl;

	return 0;
}
