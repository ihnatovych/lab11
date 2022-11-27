#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int n, i, less{}, negative{}, a, b{}, j, p{};
    double min, sum{};
    cout << "Ведiть кiлькiсть елементу масиву  ";
    cin >> n;
    double* arr = new double[n];
    double* mas = new double[n];
    cout << "Введiть  " << n << " eлементiв";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Ведiть iнтервал масиву, який потрiбно видалити вiд a до b:" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    min = abs(arr[0]);
    for (i = 0; i < n; i++) {
        if (min > abs(arr[i])) {
            min = abs(arr[i]);
            less = i;
        }
    }
    for (i = 0; i < n; i++) {
        if (min > (arr[i])) {
            min = (arr[i]);
            negative = i;
            break;
        }
    }
    for (i = negative + 1; i < n; i++) {
        sum = sum + abs(arr[i]);
    }
    for (i = a - 1; i < b; i++) {
        p = p + 1;
    }
    for (i = 0; i < a - 1; i++) {
        mas[i] = arr[i];
    }
    for (i = b, j = a - 1; i < n; i++, j++) {
        mas[j] = arr[i];
    }
    for (i = n - p; i < n; i++) {
        mas[i] = 0;
    }
    for (i = 0; i < n; i++) {
        arr[i] = mas[i];
    }
    cout << "Iндекс мiнiмального за модулем елемента масиву   " << less + 1 << endl;
    cout << "Суму модулiв елементiв масиву, розташованих пiсля першого вiд’ємного елемента  " << sum << endl;
    cout << "Виведення заданих  " << n << "  елементiв :";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
