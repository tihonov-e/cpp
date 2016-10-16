/*Решение квадратного уравнения
-------------------------------
Задание:
Написать программу, которое решает квадратное уравнение.
Пользователь вводит (с клавиатуры) три действительных коэффициента a, b, c.
Программа выводит все решения уравнения (два, одно), "решений нет",
если их нет или "бесконечно много решений", если подходит любое значение x (a = 0, b = 0, c = 0).
Обработать все варианты исходных данных.
``` cpp
void solve_equation(double a, double b, double c) {
  // TODO: реализовать
}
```

``` cpp
  // Коэффициенты квадратного уравнения
  double a, b, c;
  // a*x^2 + b*x + c = 0
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  cout << "c = ";
  cin >> c;
  cout << endl;

  // Вызов функции решения квадратного уравнения
  solve_equation(a, b, c);
```
*/

#include <iostream>
#include <cmath>                            // для функции sqrt
using namespace std;

int solve_equation (double a, double b, double c)
{
    double D = 0, x1 = 0, x2 = 0;

    //find D
    // D = b^2 - 4ac

    D = b*b - 4 * a * c;

    //if D = 0 -> cout<< "D = 0, x = - b/2a!"<<endl;
    //-------------------------------------------
    if (D == 0)
    {

        cout << "D =  "<< D << "\n" << "x1 = x2 = " << (-b / (2*a)) << endl;
        return 1;
    }

     //if D > 0 -> cout<< "D = ... , x1 = , x2 = "<<endl;
    // x1,2 = ( -b +- sqrt(D) ) / 2*a
    //-------------------------------------------

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / 2*a;
        x2 = (-b - sqrt(D)) / 2*a;
        cout << "D = " << D << "\n" << "x1 = " << x1 << "\n" << "x2 = " << x2 << endl;
        return 1;
    }

    //if D < 0 -> cout << "D < 0 ", " no solves!" << endl;
     //-------------------------------------------

     if ( D < 0 )
     {
         cout << "D < 0" << "\n" << " No solves!" << endl;
         return 1;
     }

     return 1;
}
int main()
{
    double a = 0, b = 0, c = 0;  //coefficient

    //enter coeff.

    cout << "a*x^2 + b*x + c" << endl;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    //call function
    solve_equation (a, b, c);

    //cout << "Hello world!" << endl;
    return 0;
}
