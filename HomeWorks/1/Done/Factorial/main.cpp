/*Вычисление факториала
---------------------

Программа вводит у пользователя значение N и выводит таблицу
-----------
| 1! |  1 |
| 2! |  2 |
| 3! |  6 |
| ...|    |
| N! | .. |
-----------
*/

#include <iostream>

using namespace std;

int fact (int n)
{
    unsigned long int _N = 1;

    cout << "----------" << endl;

    if (n == 0)
    {
        cout << "| 0! | 0 |" << endl;
        cout << "----------" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        _N *= i;
        cout <<"| "<< i << "! " << "| " << _N << " |"<< endl;
    }

    cout << "----------" << endl;
    return 0;
}

int main()
{
    int n = 0;

    cout << " n = "; cin >> n;
    fact (n);
    return 0;
}
