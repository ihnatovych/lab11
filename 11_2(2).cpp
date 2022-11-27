#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int f, max, min, k{}, j{}, c, i;
    cout << "Введiть кiлькiсть елементiв масиву   ";
    cin >> f;
    int* m = new int[f];
    cout << "X[f]:";
    for (i = 0; i < f; i++)
    {
        cin >> m[i];
    }
    max = 0;
    min = m[0];
    for (int i = 1; i < f; ++i) {
        for (int c = 0; c < f - i; c++) {
            if (m[c] > m[c + 1]) {
                int k = m[c];
                m[c] = m[c + 1];
                m[c + 1] = k;
            }
        }
    }
    cout << "X[f]:";
    for (int i = 0; i < f; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
