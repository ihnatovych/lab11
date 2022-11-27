#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Ukr");
    int  month, days;

    cout << "Введiть номер мiсяця:";
    cin >> month;
    if (month == 1)
    {
        month = 1;
        days = 31;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв:" << days << endl;
    }
    else 
        if (month == 2)
        {
            month = 2;
            days = 32;
            cout << "мiсяць:" << month << endl;
            cout << "кiлькiсть днiв:" << days << endl;
        }
    else
        if (month == 3)
            {
                month = 3;
                days = 33;
                cout << "мiсяць:" << month << endl;
                cout << "кiлькiсть днiв:" << days << endl;
            }
    else
        if (month == 4)
                {
        month = 4;
        days = 34;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв:" << days << endl;
                }
    else
        if (month == 5)
           {
        month = 5;
        days = 35;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв:" << days << endl;
                    }
    else
        if (month == 6)
           {
        month = 6;
        days = 36;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв:" << days << endl;
        }
        else
            if (month == 7)
        {
        month = 7;
        days = 37;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв" << days << endl;
            }
            else  
                {
        cout << "Неiснуючий мiсяць" << endl;
    }
}
