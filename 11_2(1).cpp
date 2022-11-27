#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int n, max, min, k{}, j{}, t;
    cout << "Введiть кiлькiсть елементiв масиву = ";
    cin >> n;
    int i;
    int* m = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    max = m[0];
    min = m[0];
    for (int i = 0; i < n; i++)
    {
        if (max < m[i]) {
            max = m[i];
            j = i;
        }
        if (min > m[i]) {
            min = m[i];
            k = i;
        }
    }
    t = m[j];
    m[j] = m[k];
    m[k] = t;

    for (int i = 0; i < n; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
    cout << "Min:" << min << endl;
    cout << "Max:" << max << endl;
    system("pause");
    return 0;

}
