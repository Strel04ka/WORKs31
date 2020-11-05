#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "x = ";
	cin >> x;

	A = 8.1 + pow(x, 3);

	//1 Спосіб

	if (x < -3.5)
	{
		B = 1 - pow(x, -5);
	}
	if (-3.5 <= x && x < 1)
	{
		B = 1 / tan(x + 1);
	}
	if (1 <= x)
	{
		B = atan(2 * x) - log10(x / 2);
	}
	y = A + B;
	cout << "1) y = " << y << endl;

	//2 Спосіб

	if (x < -3.5)
	{
		B = 1 - pow(x, 5);
	}
	else
	{
		if (-3.5 <= x && x < 1)
		{
			B = 1 / tan(x + 1);
		}
		else if (1 <= x)                             //else 
		{                                          //{
			B = atan(2 * x) - log10(x / 2);        //	B = atan(2 * x) - log10(x / 2);
		}                                          //}
	}
	y = A + B;
	cout << "2) y = " << y;
	cin.get();
	return 0;
}
