#include <iostream>

using namespace std;

#define M 16
// объ€вл€ем массив
int a [16];

//объ€вл€ем и инициализируем массив
int b [M] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

//------‘ункции-------------



int main()
{
    //ввод массива a c клавиатуры
    //---------------------------
    //заголовок
    cout << "Array a \n"<<endl;

    //цикл ввода массива а
    for (int i = 0; i<M; i++)
    {
        cout << "a["<<i<< "] = "; cin>>a[i];
    }


    //цикл вывода массива
    cout << "index"<<"\t\t"<<"array's element \n"<<endl; // заголовок

    for (int i = 0; i<M; i++)   //цикл вывода массива
    {
        cout << "a[" << i<< "]" <<"\t\t" << a[i] << endl;
    }



    //вывод массива b на экран
    //------------------------

    //заголовок
    cout << "Array b \n"<<endl;
    cout << "index"<<"\t\t"<<"array's element \n"<<endl;

    for (int i = 0; i < M; i++)
    {
        cout << "b[" << i<< "]" <<"\t\t" << b[i] << endl;
    }

    return 0;
}
