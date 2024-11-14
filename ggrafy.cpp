#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    int n, i, j;
    int** A;
    cout << "Podaj do jakiej liczby chcesz wyswietlic tabliczke" << endl;
    cin >> n;

    fstream mnozenie;
    mnozenie.open("C:\\mnozenie.txt", ios::out);
    A = new int* [n];

    for (i = 0; i < n; i++) {
        A[i] = new int[n];
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            A[i][j] = (i * j);
        }
    }

    cout << "   ";
    for (i = 0; i < n; i++)
        cout << setw(3) << i;

    cout << endl << endl;

    for (i = 0; i < n; i++)
    {
        cout << setw(3) << i;
        for (j = 0; j < n; j++)
            cout << setw(3) << (int)A[i][j];
        cout << endl;
    }

    cout << endl;

    system("pause");
    mnozenie.close();
    return 0;
}
