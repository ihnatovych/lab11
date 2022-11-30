#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    const int n = 9;
    int a[n][n], p = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i < j && i < n - 1 - j) || (i > j && i > n - 1 - j)) a[i][j] = p++;
            else a[i][j] = 0;
            cout << setw(2) << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}