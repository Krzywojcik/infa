#include <iostream>
using namespace std;

int main() {
	int rok;
cout << "podaj rok" << endl; 
cin >> rok;
if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0) {
	cout << " Rok przestepny" << endl;
}
else {
	cout << "Rok NIE jest przestepny" << endl;
}


return 0;
}
