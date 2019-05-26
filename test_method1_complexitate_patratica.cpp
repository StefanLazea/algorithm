#include <iostream>

using namespace std;

int main()
{
	int n =5;

	int vect[n] = { 4, 5, 10, 11, 6 };

	//complexitate patratica
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (vect[i] - vect[j] == -1) {
				cout << i << " - " << j << endl;
			}
		}
	}

	return 0;
}
