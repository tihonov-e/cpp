#include <iostream>

using namespace std;

#define M 16
// ��������� ������
int a [16];

//��������� � �������������� ������
int b [M] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

//------�������-------------



int main()
{
    //���� ������� a c ����������
    //---------------------------
    //���������
    cout << "Array a \n"<<endl;

    //���� ����� ������� �
    for (int i = 0; i<M; i++)
    {
        cout << "a["<<i<< "] = "; cin>>a[i];
    }


    //���� ������ �������
    cout << "index"<<"\t\t"<<"array's element \n"<<endl; // ���������

    for (int i = 0; i<M; i++)   //���� ������ �������
    {
        cout << "a[" << i<< "]" <<"\t\t" << a[i] << endl;
    }



    //����� ������� b �� �����
    //------------------------

    //���������
    cout << "Array b \n"<<endl;
    cout << "index"<<"\t\t"<<"array's element \n"<<endl;

    for (int i = 0; i < M; i++)
    {
        cout << "b[" << i<< "]" <<"\t\t" << b[i] << endl;
    }

    return 0;
}
