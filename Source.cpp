#include "Header.h"
#include < cmath>
void Algoritm1(double a, double x)
{
	const double PI = 3.141592653589793;
	double y;
	if (a <= x)
	{
		if ((x + a) > 0)
		{
			y = a + log(x + a);
			cout << y << endl;
		}
		else 
		{
			cout << " Error with logorithm...." << endl;
			y = 0;
		}
	}
	if (a > x)
	{
		if (sin(a * x) >= 0)
		{
			y = sqrt(sin(a * x));
			cout << y << endl;
		}
		else 
		{
			cout << "Error with sqrt..." << endl;
			y = 0;
		}
	}
	double t; 
	if (a > y)
	{
		if (!(a - x) == 0)
		{
			t = y / (a - x);
			cout << t << endl;
		}
		else
		{
			t = 0;
			cout << "Error with denominator.." << endl;
		}
	}
	if (a == y)
	{
		if ((!(a - x) == 0) && !y == 0)
		{
			t = y / (a - x) + (a + x) / (y * y);
			cout << t << endl;
		}
		else
		{
			t = 0;
			cout << "Error with denominator..." << endl;
		}
	}
	if (a < y)
	{
		if ((a * x) == PI / 2)
		{
			t = 0;
			cout << "Error with tan..." << endl;
		}
		else
		{
			t = tan(a * x) + cos(2 * a * y);
			cout << t << endl;
		}
	}
}