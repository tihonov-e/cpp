/*
На рекурсию
-----------
Пользователь вводит число N.
Программа раскладывает его множители всеми возможными способами.

Например:
* 8 = 4 * 2
* 8 = 2 * 2 * 2
*/

#include <iostream>

using namespace std;

// вывод множителей
void recursion (int n, int k)
{
    //условие остановки
    if (k >= (n ))
    {
        cout << n << endl;
        return;
    }

    if (n % k == 0)
    {
        cout << k << endl;
        recursion (n / k, k);
    }
    else recursion(n , ++k);

}

int main()
{
    int n = 0;
    int k = 2;

    cout << "n = "; cin >> n;

    recursion (n, k);
    return 0;
}
