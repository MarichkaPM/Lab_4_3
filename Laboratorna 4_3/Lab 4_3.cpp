#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double xp, xk, dx, x, a, b, c, F;

	cout << "xp = "; cin >> xp; cout << endl;
	cout << "xk = "; cin >> xk; cout << endl;
	cout << "dx = "; cin >> dx; cout << endl;
	cout << "a = "; cin >> a; cout << endl;
	cout << "b = "; cin >> b; cout << endl;
	cout << "c = "; cin >> c; cout << endl;


	cout << fixed;
	cout << "-------------------------------" << endl;
	cout << "| " << setw(7) << "x" << setw(7) << " |"
		<< setw(7) << "F" << setw(8) << " |" << endl;
	cout << "-------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = -((2 * x - c) / (c * x - a));
		else
			if (x > 0 && b == 0)
				F = (x - a) / (x - c);
			else
				F = -x / c + (-c / (2 * x));

		cout << fixed;
		cout << "|" << setw(13) << setprecision(2) << x
			<< " |" << setw(13) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "-------------------------------" << endl;

	system("pause");
	return 0;

}
