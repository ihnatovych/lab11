#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
int main()
{
	setlocale (0, ".1251");
	double x, y, R;
	cout << " x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "R = ";
	cin >> R;

	if (x >= 0 && abs(x) <= R && y >= 0 && abs(y) <= R) 
		cout << "Точка попадає у зафарбовану область";
	else if (x <= 0 && abs(x) <= R && y <= 0 && abs(y) <= R)
		cout << "Точка попадає у зафарбовану область";
	else if (x <= 0 && abs(x) <= R && y >= 0 && abs(y) <= R && y <= -1 * sqrt(sqrt(R) - sqrt(x + R)) + R)
		cout << "Точка попадає у зафарбовану область";
	else if (x >= 0 && abs(x) <= R && y <= 0 && abs(y) <= R && y >= sqrt(sqrt(R) - sqrt(x - R)) - R)
		cout << "Точка попадає у зафарбовану область";
	else
	cout << "Точка не попадає у зафарбовану область";
}
