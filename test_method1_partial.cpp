#include <iostream>

using namespace std;

int main()
{

	int vect[] = { 4, 5, 10, 11, 6 };
	int M;
	int first = 0;
	int last = size(vect);

	//se foloseste vectorul initial, pornind din capete
	//ca rezultat sunt doar doua din cele 3 perechi din acest set de date

	while(first <= last){
		if (vect[first] - vect[last] == M) {
			cout << first<< " "<< last << endl;
		}

		if (vect[first] - vect[last] > M) {
			last--;
		}
		else {
			first++;
		}
	}

	return 0;
}
