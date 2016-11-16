//Преобразовать массив так, чтобы сначала шли нулевые элементы, а затем все остальные
// Источник: http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass/

#include <iostream>

using namespace std;

int main()
{
//define array
    int a[] = {1,2,0,2,0,2,0,6,7,8};
    int n = 10;
    int count_; //переменная для перестановки

//----------вывод массива------------

    cout << "Original array"<<"\n"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl; //перенос строки

//---------преобразование массива--------------------

    for (int i = 0; i<n; i++) //find zero elements
    {
        if (a[i] == 0)    // если нашли нулевой эдемент
        {
            for (int k = i; k !=0; k--) // сдвигаем нуль влево до конца
            {
                // меняем местами предыдущий и текущий элементы
                count_ = a[k-1];    //используем переменную для перестановки
                a[k-1] = a[k];
                a [k] = count_;
            } // for k
        } //if i
    } //for i

//----------вывод измененного массива------------

    cout <<"\n"<< "Modified array"<<"\n"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl; //перенос строки

    return 0;
}
