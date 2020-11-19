#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R, a, b, m;
	srand((unsigned)time(NULL));
	
	cout << "R = "; cin >> R;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		

		if ((x * x + y * y <= R * R && y <= 0 && y >= -b && x <= 0) ||
			(x * x + y * y >= R * R && y >= 0 && y <= b && x <= a))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	
	cout << endl << fixed;


	for (int i = 0; i < 10; i++)
	{
		m = max(a, max(b, R));
		x = -m + rand() * (m - (-m)) / RAND_MAX;
		y = -m + rand() * (m - (-m)) / RAND_MAX;

		if ((x * x + y * y <= R * R && y <= 0 && y >= -b && x <= 0) ||
			(x * x + y * y >= R * R && y >= 0 && y <= b && x <= a))

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}

