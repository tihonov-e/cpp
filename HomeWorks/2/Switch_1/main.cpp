//задача на оператор switch
// Пользователь вводит с клавиатуры число от 1 до 7
// Прогрограмма опредеделяет, какому дню недели, соответсвует это число
// если введено число не из диапазона, программа спрашивает пользователя ввести число еше раз


#include <iostream>

using namespace std;

int main()
{
    int n = 1; // число
    int flag = 1; // флаг для цикла
                    // 0 - введено число из диапазона
                    // 1 - введено число не из диапазона

    cout << "Enter n (n = 1..7)" <<endl;
    cout << "n = " ; cin >> n;

    while (flag)
    {
        switch (n)
        {


            case 1:
            {
            cout << "Monday" <<  endl;
            flag = 0;
            break;
            }

            case 2:
            {
            cout << "Tuesday" <<  endl;
            flag = 0;
            break;
            }

            case 3:
            {
            cout << "Wednesday" <<  endl;
            flag = 0;
            break;
            }

            case 4:
            {
            cout << "Thursday" <<  endl;
            flag = 0;
            break;
            }

            case 5:
            {
            cout << "Friday" <<  endl;
            flag = 0;
            break;
            }

            case 6:
            {
            cout << "Saturday" <<  endl;
            flag = 0;
            break;
            }

            case 7:
            {
            cout << "Sunday" <<  endl;
            flag = 0;
            break;
            }

            default:
                {
                cout << "Error! Enter n = 1...7!" <<endl;
                cout << "n = " ; cin >> n;
                flag = 1;
                break;
                }


        }   //switch
    } // while
    return 0;
}
