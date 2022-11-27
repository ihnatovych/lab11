#include <iostream>
#include <locale>
using namespace std;
int main() 
{
    setlocale (LC_CTYPE, "Ukr");
    int  month, days;

    cout << "Введiть номер мiсяця:";
    cin >> month;

    switch (month)
    {
    case 1:
        month = 1;
        days = 31;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв:" << days << endl;
        break;

    case 2:
        month = 2;
        days = 32;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв:" << days << endl;
        break;

    case 3:
        month = 3;
        days = 33;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв:" << days << endl;
        break;

    case 4:
        month = 4;
        days = 34;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв:" << days << endl;
        break;

    case 5:
        month = 5;
        days = 35;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв:" <<  days << endl;
        break;

    case 6:
        month = 6;
        days = 36;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв:" << days << endl;
        break;

    case 7:
        month = 7;
        days = 37;
        cout << "мiсяць:" << month << endl;
        cout << "кiлькiсть днiв" << days << endl;
        break;

    default:
        cout << "Неiснуючий мiсяць" << endl;
        break;
    }
}
