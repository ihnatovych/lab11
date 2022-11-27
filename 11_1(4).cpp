#include <iostream> 
#include <cmath> 

using namespace std;

void funcA(int i, double& a) {
	for (int k = i; k < i + 8; k++) a += 3 * cos(k + 2.3) / (sin(k) + 3);
}
void funcB(int i, double& b) {
	for (int k = i; k < i + 5; k++) b += 1 / (pow(sin(k), 3) + 5.4) - log10(k);
}
int main()
{
	setlocale(0, ".1251");
	const int i = 12;
	cout << "i = " << i << endl;
	double a = 0;
	funcA(i, a);
	cout << "a = " << a << endl;
	double b = 0;
	funcB(i, b);
	cout << "b = " << b << endl;
	float z = pow(abs(a), abs(b));
	cout << "z = " << z << endl;
	system("pause");
}
