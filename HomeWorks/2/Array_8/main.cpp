/*������� ���������� ������� �������
   ��������: http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass/*/

#include <iostream>

using namespace std;
#define N 10    //����� ��������� �������

int a[N] = {1,  2  ,3 ,  4  ,5,  6  ,99,  8  ,9,  10 };    //�������� ������
int main()
{
     //----------����� �������------------

    cout << "Original array"<<"\n"<< endl;
    for (int i = 0; i < N; i++)
    {

        cout << a[i] << " ";
    }
    cout << "/n/n" <<endl;  //��� ������ ������


    //----------------------------------
    //���� ��������
    //---------------------------------

    int Max = 0;    //������������ ������� �������
    for (int i = 0; i < N; i++)
    {
        if (a[i] > Max) Max = a[i];
    }

    cout << "max = " << Max << endl;

    return 0;
}
