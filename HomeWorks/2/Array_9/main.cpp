/*������������� ������ ���, ����� ������� ��� ������� ��������, � ����� ��� ���������.
   ��������: http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass*/

#include <iostream>

using namespace std;
#define N 10    //����� ��������� �������

int a[N] = {1,  2,  0 ,  4  ,0,  6  ,0,  8  ,9,  10 };    //�������� ������


int main()
{
     //----------����� �������------------

    cout << "Original array"<<"\n"<< endl;
    for (int i = 0; i < N; i++)
    {

        cout << a[i] << " ";
    }
    cout << "\n" <<endl;  //��� ������ ������


    //----------�������������� �������-----------

    //���� ����

    for (int i = 0; i < N;  i++)
    {
        if (a[i] == 0) // ���� ����� ������� �������,
        {
            for (int k = i; k  0; k--)
            {
                a[k] = a[k-1];
                a[k-1] = 0;

            }
        }
    }

    //----------����� �������------------

    cout << "Modyfied array"<<"\n"<< endl;
    for (int i = 0; i < N; i++)
    {

        cout << a[i] << " ";
    }


    return 0;
}
