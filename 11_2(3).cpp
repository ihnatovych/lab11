#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int f, i, sum{}, a{}, b{}, j, n, maxy{}, miny{};
    double max, min, multiplication{};
    cout << "Ведiть кiлькiсть елементу масиву  ";
    cin >> f;
    double* arr = new double[f];
    cout << "Введiть вашi   " << f << "  елементiв :  ";
    for (i = 0; i < f; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < f; i++) {
        if (arr[i] > 0) {
            sum = sum + arr[i];
        }
    }
    max = abs(arr[0]);
    for (i = 0; i < f; i++) {

        if (max < abs(arr[i])) {
            max = abs(arr[i]);
            maxy = i;
        }
    }
    min = abs(arr[0]);
    for (i = 0; i < f; i++) {
        if (min > abs(arr[i])) {
            min = abs(arr[i]);
            miny = i;
        }
    }
    multiplication = 1;

    for (i = miny + 1; i < maxy; i++) {
        multiplication = multiplication * arr[i];
    }
    for (i = 0; i < f - 1; i++) {
        for (j = 0; j < f - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                n = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = n;
            }
        }
    }
    cout << "Сума додатнiх елементiв  " << sum << endl;
    cout << "Добуток елементiв масиву, розташованих мiж максимальним за модулем i мiнiмальним за модулем елементами = " << multiplication << endl;
    cout << "Виведення  " << f << "  елементiв: ";
    for (i = 0; i < f; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;

}
