/*������� � ������� ��� �����, ������� ����������� ����� ���� ���.
   ��������: http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass/*/

#include <iostream>

using namespace std;

#define N 10    //����� ��������� �������

int main()
{


//-----��� � http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass-2/

    int a[] = {1,2,3,2,4,2,5,6,7,8};
    int n = 10;
    int count_;


    //----------����� �������------------

    cout << "Original array"<<"\n"<< endl;
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    cout<<endl;


   //----------����� ���������� ��������------------

    //������� ���� i
    for (int i = 0; i < n; i++)
    {
        count_ = 1;     //���������� ������� ����������


        //������� j
        //���������� ���������, ��������� �� a[i]

        for (int j = i+1; j<n; j++)
        {
            if (a[j]==a[i])
                count_++;   //������� ����������
        }

        if (count_ > 2)     //���� ���������� ������ 2-�
        {
            int one = a[i];     // ��������� ����������� ������� ��� ���������

            for (int j = i; j < n; j++)     //���� ��� �������� ����������� ���������
            {
                if (a[j] == one)        //���� ������� ������
                {
                    //delete
                    for (int k = j+1; k < n; k++)   //������� ������ �����
                    {
                        a[k-1] = a [k];     //�������� ��������� ������� ��������� ���������
                    }
                    n--;    //��������� ����������� ������� (�������� �����)
                    j--;    //��� ����� ��� ������ ������������
                }
            }
            i--;    //
        }

    } //������� ���� i

    if (n ==0)
        cout << "empty array"<<endl;
    else
    {
        cout << "Modified array"<< endl;
        for (int p = 0; p< n; p++)
        {
            cout << a[p] << " ";
        }
    }



    return 0;
}
