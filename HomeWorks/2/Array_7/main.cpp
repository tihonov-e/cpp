/*������� ����� ��������� ������� ����� ����� ������� ������. ���� ���� ����� ��� � �������, �� �������� ����.
   ��������: http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass/*/

#include <iostream>

using namespace std;
#define N 10    //����� ��������� �������

int a[N] = {1,  2  ,0 ,  4  ,5,  6  ,7,  0  ,9,  10 };    //�������� ������ summ between zeros = 22

int main()
{
    int summ = 0; // �����


     //----------����� �������------------

    cout << "Original array"<<"\n"<< endl;
    for (int i = 0; i < N; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;
    //-------------------
    //���� ���-�� ����� � �������
    //-------------------

    int counter = 0;  //���-�� ����� � �������
    for (int i = 0; i < N; i++)
    {
        if (a[i] == 0) counter++;   //������� ���� � �������
    }

    //���� ���-�� ����� ����� 2-�

    if (counter >= 2)
    {
        for (int i = 0; i < N; i++) //������ ��������� ������
        {
            if (a[i] ==0)   //� ���� ������ ����
            {
               int j = i + 1;   //����� ������, ��������� �� ����� �������
               while (a[j] != 0)    //��������� �� ���������� ����
               {
                   summ+=a[j];  //����� �����
                   j++; //��������� � ���������� ��������

               } //while a[j]
                i = N;  //������������� ��������� ���� for
            } //if a[i] ==0
        } //for i

        cout << "summ = " << summ << endl;
    } //if counter
    else cout << "summ = " << 0 << endl;
    return 0;
}
