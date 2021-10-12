#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, r;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> r;
		if ((y * y <= r * r - x * x && y <= 0 && x <= 0) || (y * y <= r * r - x * x && y >= pow(x - 1, 2) && x >= 0)) {
			cout << "Yes";
		}
		else {
			cout << "No";
		}

	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = 6. * rand() / RAND_MAX - 3;
			y = 6. * rand() / RAND_MAX - 3;
			if ((y >= 1 && y <= 3 && x >= -1 && x <= 1) ||
				(x * x + y * y <= 1) ||
				(y >= -2 && y <= x - 1 && y <= -x - 1))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}