/*������� ������������ ��������� ������� � ��������� ��������
   ��������: http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass/*/

#include <iostream>

using namespace std;
#define N 10    //����� ��������� �������

int a[N] = {1,  -2  ,3,  -4  ,5,  -6  ,7,  -8  ,9,  -10 };    //�������� ������

int main()
{
int mult = 1; // ������������

     //----------����� �������------------

    cout << "Original array"<<"\n"<< endl;
    for (int i = 0; i < N; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;

     //----------����� ������������------------

    for (int i = 1; i<N; i+=2)
    {
    }

    cout << "mult = " << mult<< endl; //����� ���������� �� �����

    return 0;
}
