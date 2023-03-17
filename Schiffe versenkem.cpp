#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));

	char schiffe[11][11] = {
		{'Ä','1','2','3','4','5','6','7','8','9','1'},
		{'1','O','O','O','O','O','O','O','O','O','O'},
		{'2','O','O','O','O','O','O','O','O','O','O'},
		{'3','O','O','O','O','O','O','O','O','O','O'},
		{'4','O','O','O','O','O','O','O','O','O','O'},
		{'5','O','O','O','O','O','O','O','O','O','O'},
		{'6','O','O','O','O','O','O','O','O','O','O'},
		{'7','O','O','O','O','O','O','O','O','O','O'},
		{'8','O','O','O','O','O','O','O','O','O','O'},
		{'9','O','O','O','O','O','O','O','O','O','O'},
		{'1','O','O','O','O','O','O','O','O','O','O'}
	};

	//bool again = false;
	int schiffe_anzahl = 2;
	int versuch = 4;
	int trys;
	int x;
	int y;
	int xs;
	int ys;

	char feld[11][11] = {
		{'Ä','1','2','3','4','5','6','7','8','9','1'},
		{'1','O','O','O','O','O','O','O','O','O','O'},
		{'2','O','O','O','O','O','O','O','O','O','O'},
		{'3','O','O','O','O','O','O','O','O','O','O'},
		{'4','O','O','O','O','O','O','O','O','O','O'},
		{'5','O','O','O','O','O','O','O','O','O','O'},
		{'6','O','O','O','O','O','O','O','O','O','O'},
		{'7','O','O','O','O','O','O','O','O','O','O'},
		{'8','O','O','O','O','O','O','O','O','O','O'},
		{'9','O','O','O','O','O','O','O','O','O','O'},
		{'1','O','O','O','O','O','O','O','O','O','O'}
	};


	cout << endl << endl << endl;

	trys = versuch;

	for (int i = 0; i < schiffe_anzahl; i++)
	{
		xs = rand() % 11;
		ys = rand() % 11;
		if (schiffe[xs][ys] == 'O')
		{
			schiffe[xs][ys] = { 'X' };
		}
		else
		{
			i--;
		}
	}

	for (int i = 0; i < 11; i++)
	{
		for (int b = 0; b < 11; b++) {
			cout << schiffe[i][b] << " ";
		}
		cout << endl;
	}

	cout << endl << endl << endl << endl;

	while (trys > 0) {

		//	again = false;

		for (int i = 0; i < 11; i++)
		{
			for (int b = 0; b < 11; b++) {
				cout << feld[i][b] << " ";
			}
			cout << endl;
		}
		cout << endl << endl << endl << endl;

		cout << endl << "Geben sie die Y - Koordinate ein: ";
		cin >> x;
		cout << endl << endl << "Geben sie die X - Koordinate ein: ";
		cin >> y;
		cout << endl << endl;


		if (schiffe[x][y] == 'X') {
			cout << "Treffer!!" << endl;
			schiffe[x][y] = { 'O' };
			feld[x][y] = { 'X' };
			cout << endl << endl;
		}
		else {
			cout << "Verfehlt!!" << endl;
			trys--;
			feld[x][y] = { '0' };
			cout << endl << endl;
		}

		cout << endl << endl << endl << endl;
	}
	if (trys == 0) {
		cout << "Game Over !!" << endl << endl << endl << "Try Again?";
	}
	//if (again == true) {
	//	trys = versuch;
	//}
}
