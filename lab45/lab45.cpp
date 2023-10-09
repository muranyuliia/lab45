#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	double x, y, R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	cout << "R = "; cin >> R; 

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y >= 0 && y <= 2 * R && x >= 0 && x <= 2 * R) ||
			(x * x + y * y <= 1) ||
			(y >= -2 * R && y <= x ))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - 2*R ;
		y = 6. * rand() / RAND_MAX - 2*R ;
		if ((y >= 0 && y <= 2*R && x >= -2*R && x <= 2*R) ||
			(x * x + y * y <= 2*R) ||
			(y >= -2 * R && y <= x))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}