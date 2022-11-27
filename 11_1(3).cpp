#include <iostream>
#include <math.h>
#include <cmath>

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
int main()
{
	setlocale(0, ".1251");
	int f;
	cout << "Введiть номер задачi  ";
	cin >> f;
	if (f == 1)
	{
		setlocale(0, ".1251");
		int n, count;
		double t = 0;
		cout << "Введiть n  ";
		cin >> n;
		for (int count = 0; count < n; ++count)
		{
			t = t + sqrt(2);
		}
		cout << "t = " << t << endl;
		system("pause");
		return 0;
	}

	if (f == 2)
	{

		setlocale(0, ".1251");
		int q, s;
		cout << "Введiть кiлькiсть пасажирiв лiфту - ";
		cin >> q;
		cout << "Максимальна вантажнiсть лiфту ";
		cin >> s;
		int i;
		int* m = new int[q];
		for (i = 0; i < q; i++)
		{
			m[i] = 60 + -rand() % 20;
		}
		for (i = 0; i < q; i++)
		{
			cout << "m[" << i << "]= " << m[i] << "\n" << endl;;
		}
		int sum = 0;
		for (i = 0; i < q; i++)
		{
			sum = sum + m[i];
			if (sum > s) {
				cout << "Зайвий пасажир котрий постраждає - " << i + 1 << endl;
				return 0;
			}
		}
	}
	if (f == 3)

	{
		int p;
		do {
			cout << "g = ";
			cin >> p;
		} while (p < 1);

		for (int i = 2; i < p; ++i) {

			int flag = 1;
			for (int j = 2; j < i; ++j)
				if (i % j == 0 && i != j) {
					flag = 0;
					break;
				}

			if (flag == 1 && p % i == 0) {
				cout << i << endl;
				p /= i;
			}
		}
	}


}

