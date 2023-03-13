#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));

	char schiffe[10][10] = {
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'}
	};

	bool again = false;
	int schiffe_anzahl = 2;
	int versuch = 4;
	int trys;
	int x;
	int y;
	int xs;
	int ys;

	char feld[10][10] = {
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'},
		{'O','O','O','O','O','O','O','O','O','O'}
	};

	
	cout << endl << endl << endl;

	trys = versuch;

	for (int i = 0; i < schiffe_anzahl; i++)
	{
		xs = rand() % 10;
		ys = rand() % 10;
		 if (schiffe[xs][ys] != 'X')
		 {
			 schiffe[xs][ys] = { 'X' };
		 } else
		 {
			 i--;
		 }
	}

	for (int i = 0; i < 10; i++)
	{
		for (int b = 0; b < 10; b++) {
			cout << schiffe[i][b] << " ";
		}
		cout << endl;
	}

	cout << endl << endl << endl << endl;

	while (trys > 0) {

		again = false;

	for (int i = 0; i < 10; i++)
	{
		for (int b = 0; b < 10; b++) {
			cout << feld[i][b] << " ";
		}
		cout << endl;
	}
	cout << endl << endl << endl << endl;

	cout << endl << "Geben sie die X - Koordinate ein: ";
	cin >> x;
	cout << endl << endl << "Geben sie die Y - Koordinate ein: ";
	cin >> y;
	cout << endl << endl;


	if (schiffe[x][y] == 'X') {
		cout << "Treffer!!" << endl;
		schiffe[x][y] = { 'O' };
		feld[x][y] = { 'X' };
		cout << endl << endl;
	} else {
		cout << "Verfehlt!!" << endl;
		trys--;
		cout << endl << endl;
	}


	for (int i = 0; i < 10; i++)
	{
		for (int b = 0; b < 10; b++) {
			cout << feld[i][b] << " ";
		}
		cout << endl;
	}
	cout << endl << endl << endl << endl;
	}
	if (trys == 0) {
		cout << "Game Over !!" << endl << endl << endl << "Try Again?";
		cin >> again;
	}
	if (again == true) {
		trys = versuch;
	}
}
