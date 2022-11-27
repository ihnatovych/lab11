#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int n, i, th{}, maximum{}, j, t;
    double max, min, multiplication{};
    cout << "Введiть кiлькiсть елементiв масиву  ";
    cin >> n;
    double* arr = new double[n];
    cout << "Введiть " << n << "елементiв";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > 3) {
            th++;
        }
    }
    max = arr[0];
    for (i = 0; i < n; i++) {
        if (max < abs(arr[i])) {
            maximum = i;
        }
    }
    multiplication = 1;
    for (i = maximum + 1; i < n; i++) {
        multiplication = multiplication * (arr[i]);
    }
    if (maximum == n - 1) {
        multiplication = 0;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    cout << "Кiлькiсть елементiв масиву, якi бiльше 3 дорiвнює " << th << endl;
    cout << "Добуток елементiв масиву, розташованих пiсля максимального за модулем елемента  " << multiplication << endl;
    cout << "Виведення" << n << "елементiв";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}