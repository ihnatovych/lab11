#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int n, i, more, positive, a, b{}, j, p{};
    double max, sum{};
    cout << "Ведiть кiлькiсть елементу масиву   ";
    cin >> n;
    double* arr = new double[n];
    double* mas = new double[n];
    cout << "Введiть " << n << " елементiв";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Ведiть iнтервал масиву,який треба розташувати на його початку вiд a до b:" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    max = abs(arr[0]);
    for (i = 0; i < n; i++) {
        if (max < abs(arr[i])) {
            max = abs(arr[i]);
            more = i;
        }
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive = i;
            break;
        }
    }
    for (i = positive + 1; i < n; i++) {
        sum = sum + (arr[i]);
    }
    for (i = a - 1; i < b; i++) {
        p = p + 1;
    }
    for (i = 0, j = a - 1; j < b; i++, j++) {
        mas[i] = arr[j];
    }
    for (i = p, j = 0; j < a - 1; i++, j++) {
        mas[i] = arr[j];
    }
    for (i = b; i < n; i++) {
        mas[i] = arr[i];
    }
    for (i = 0; i < n; i++) {
        arr[i] = mas[i];
    }
    cout << "Iндекс максимального за модулем  елемента масиву " << more + 1 << endl;
    cout << "Суму елементiв масиву, розташованих пiсля першого додатнього елемента елемента  " << sum << endl;
    cout << "Виведення " << n << "елементiв";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
