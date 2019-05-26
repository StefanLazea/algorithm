#include <iostream>

using namespace std;


int main()
{
	int n = 0;
	int M;
	cout << "number of elements for the array: " << endl;
	cin >> n;
	cout << "M= ";
	cin >> M;

	//pentru vectori mari se preteaza o alocare dinamica

	int vector[50];
	for (int i = 0; i < n; i++) {
		cin >> vector[i];
	}
	

	//o imbunatatire ar putea fi ca vectorii sa fie alocati dinamic, 
	//pentru un space management mai bun
	int vectorAp[100] = { 0 };
	for (int i = 0; i < n; i++) {
		//pentru fiecare element din vectorul initial il marcam cu 1
		//in cazul in care in vectorul initial sunt si dubluri, trebuie marcat cu o alta variabila
		//apoi tratat cazul in urmatorul for
		vectorAp[vector[i]] = 1;
	}

	for (int i = 0; i < 100; i++) {
		//dat fiind faptul ca suma este -1; 
		//elementele nu pot fi decat consecutive in vector
		if (vectorAp[i] == 1 && vectorAp[i + 1] == 1 && (i - (i + 1)) == M) {
			//se afiseaza numerele care formeaza perechile, nu si pozitiile initiale
			cout << i << "  " << i + 1 << endl;
		}
	}

	return 0;
}
