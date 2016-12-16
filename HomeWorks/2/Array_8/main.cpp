/*Найдите наибольший элемент массива
   Источник: http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass/*/

#include <iostream>

using namespace std;
#define N 10    //число элементов массива

int a[N] = {1,  2  ,3 ,  4  ,5,  6  ,99,  8  ,9,  10 };    //основной массив
int main()
{
     //----------вывод массива------------

    cout << "Original array"<<"\n"<< endl;
    for (int i = 0; i < N; i++)
    {

        cout << a[i] << " ";
    }
    cout << "/n/n" <<endl;  //две пустых строки


    //----------------------------------
    //ищем максимум
    //---------------------------------

    int Max = 0;    //максимальный элемент массива
    for (int i = 0; i < N; i++)
    {
        if (a[i] > Max) Max = a[i];
    }

    cout << "max = " << Max << endl;

    return 0;
}
