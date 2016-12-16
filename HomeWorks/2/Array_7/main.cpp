/*Ќайдите сумму элементов массива между двум€ первыми нул€ми. ≈сли двух нулей нет в массиве, то выведите ноль.
   »сточник: http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass/*/

#include <iostream>

using namespace std;
#define N 10    //число элементов массива

int a[N] = {1,  2  ,0 ,  4  ,5,  6  ,7,  0  ,9,  10 };    //основной массив summ between zeros = 22

int main()
{
    int summ = 0; // сумма


     //----------вывод массива------------

    cout << "Original array"<<"\n"<< endl;
    for (int i = 0; i < N; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;
    //-------------------
    //ищем кол-во нулей в массиве
    //-------------------

    int counter = 0;  //кол-во нулей в массиве
    for (int i = 0; i < N; i++)
    {
        if (a[i] == 0) counter++;   //считаем нули в массиве
    }

    //если кол-во нулей более 2-х

    if (counter >= 2)
    {
        for (int i = 0; i < N; i++) //заново сканируем массив
        {
            if (a[i] ==0)   //и ищем первый ноль
            {
               int j = i + 1;   //новый индекс, следующий за нолем элемент
               while (a[j] != 0)    //выполн€ем до следующего нул€
               {
                   summ+=a[j];  //копим сумму
                   j++; //переходим к следующему элементу

               } //while a[j]
                i = N;  //принудительно завершаем цикл for
            } //if a[i] ==0
        } //for i

        cout << "summ = " << summ << endl;
    } //if counter
    else cout << "summ = " << 0 << endl;
    return 0;
}
