//������������� ������ ���, ����� ������� ��� ������� ��������, � ����� ��� ���������
// ��������: http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass/

#include <iostream>

using namespace std;

int main()
{
//define array
    int a[] = {1,2,0,2,0,2,0,6,7,8};
    int n = 10;
    int count_; //���������� ��� ������������

//----------����� �������------------

    cout << "Original array"<<"\n"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl; //������� ������

//---------�������������� �������--------------------

    for (int i = 0; i<n; i++) //find zero elements
    {
        if (a[i] == 0)    // ���� ����� ������� �������
        {
            for (int k = i; k !=0; k--) // �������� ���� ����� �� �����
            {
                // ������ ������� ���������� � ������� ��������
                count_ = a[k-1];    //���������� ���������� ��� ������������
                a[k-1] = a[k];
                a [k] = count_;
            } // for k
        } //if i
    } //for i

//----------����� ����������� �������------------

    cout <<"\n"<< "Modified array"<<"\n"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl; //������� ������

    return 0;
}
