#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
clock_t start, stop;
double czas;

void sortowanie_babelkowe(int *tab, int n) 
{
	for (int i = 1; i < n; i++) 
	{
		for (int j = n - 1; j >= 1; j--)
		{
			if (tab[j] < tab[j - 1])
			{
				int bufor;
				bufor = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = bufor;
			}
		}
	
	}
}


void quicksort(int* tablica, int lewy, int prawy)
{
	int v = tablica[(lewy + prawy) / 2];
	int i, j, x;
	i = lewy;
	j = prawy;
	do {
		while (tablica[i] < v) i++;

		while (tablica[j] > v) j--;

		if (i <= j) {
			x = tablica[i];
			tablica[i] = tablica[j];
			tablica[j] = x;
			i++; j--;
		}
	} while (i <= j);
	if (j > lewy) quicksort(tablica, lewy, j);
	if (i < prawy) quicksort(tablica, i,prawy);
}


void heapify(int* tablica, int n, int i) {
	int largest = i; 
	int left = 2 * i + 1; 
	int right = 2 * i + 2; 

	
	if (left < n && tablica[left] > tablica[largest])
		largest = left;

	
	if (right < n && tablica[right] > tablica[largest])
		largest = right;

	
	if (largest != i) {
		swap(tablica[i], tablica[largest]);

		
		heapify(tablica, n, largest);
	}
}

void heapSort(int* tablica, int n) {
	
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(tablica, n, i);

	
	for (int i = n - 1; i > 0; i--) {
		
		swap(tablica[0], tablica[i]);

		
		heapify(tablica, i, 0);
	}
}


void selectionSort(int* tablica, int n) {
	for (int i = 0; i < n - 1; i++) {
		
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (tablica[j] < tablica[minIndex]) {
				minIndex = j;
			}
		}

		
		if (minIndex != i) {
			swap(tablica[i], tablica[minIndex]);
		}
	}
}

int main() {

	srand(time(NULL));
	cout << "Podaj wielkosc tablicy" << endl;
	int wielkosc;
	cin >> wielkosc;
	int *tablica = new int[wielkosc];


	for (int i = 0; i < wielkosc; i++) {
		tablica[i] = rand() % 100000 + 1;
	}
	

	start = clock();
	//sortowanie_babelkowe(tablica, wielkosc);
	//quicksort(tablica, 0, wielkosc - 1);
	//heapSort(tablica, wielkosc);
	//selectionSort(tablica, wielkosc);

	stop = clock();

	delete[] tablica;

	czas = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << endl << "czas wykonywania instrukcji: " << czas << " s" << endl;
}