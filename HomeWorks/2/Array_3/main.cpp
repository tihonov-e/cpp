/*Удалить в массиве все числа, которые повторяются более двух раз.
   Источник: http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass/*/

#include <iostream>

using namespace std;

#define N 10    //число элементов массива

int main()
{


//-----код с http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass-2/

    int a[] = {1,2,3,2,4,2,5,6,7,8};
    int n = 10;
    int count_;


    //----------вывод массива------------

    cout << "Original array"<<"\n"<< endl;
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    cout<<endl;


   //----------поиск одинаковых значений------------

    //главный цикл i
    for (int i = 0; i < n; i++)
    {
        count_ = 1;     //сбрасываем счетчик совпадений


        //подцикл j
        //сравниваем элелемент, следующий за a[i]

        for (int j = i+1; j<n; j++)
        {
            if (a[j]==a[i])
                count_++;   //счетчик совпадений
        }

        if (count_ > 2)     //если совпадений больше 2-х
        {
            int one = a[i];     // сохраняем совпадающий элемент для сравнения

            for (int j = i; j < n; j++)     //цикл для удаления совпадающих элементов
            {
                if (a[j] == one)        //если элемент найден
                {
                    //delete
                    for (int k = j+1; k < n; k++)   //смещаем массив влево
                    {
                        a[k-1] = a [k];     //затираем найденный элемент следующим значением
                    }
                    n--;    //уменьшаем размерность массива (обрезаем хвост)
                    j--;    //шаг влево для нового сканирования
                }
            }
            i--;    //
        }

    } //главный цикл i

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
