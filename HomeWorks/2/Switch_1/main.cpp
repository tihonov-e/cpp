//������ �� �������� switch
// ������������ ������ � ���������� ����� �� 1 �� 7
// ������������ ������������, ������ ��� ������, ������������ ��� �����
// ���� ������� ����� �� �� ���������, ��������� ���������� ������������ ������ ����� ��� ���


#include <iostream>

using namespace std;

int main()
{
    int n = 1; // �����
    int flag = 1; // ���� ��� �����
                    // 0 - ������� ����� �� ���������
                    // 1 - ������� ����� �� �� ���������

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
