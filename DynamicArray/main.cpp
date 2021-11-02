#include <iostream>

using namespace std;

int main()
{
    cout << "Dynamic Array" << endl;
    cout << endl;

    // create pointer
    int *ptr;


    // пример использования операции new
    int *ptrvalue = new int;
    //где ptrvalue – указатель на выделенный участок памяти типа int
    //new – операция выделения свободной памяти под создаваемый объект.


    // пример использования операции delete:
    delete ptrvalue;
    // где ptrvalue – указатель на выделенный участок памяти типа int
    // delete – операция высвобождения памяти

    //////////////////////////////////////
    //////////////////////////////////////

    // Create DYNAMIC ARRAY // Init ///////////////////

    // объявление одномерного динамического массива на 10 элементов:
    float *ptrarray = new float[5];
    //  где ptrarray  – указатель на выделенный участок памяти под массив вещественных чисел  типа float
    //      в квадратных скобочках указываем размер массива

    // Init

    int *array = new int[5] { 9, 7, 5, 3, 1 }; // инициализируем динамический массив


    //////// DELETE DYN ARRAY ////////////////////

    // высвобождение памяти отводимой под одномерный динамический массив:
    delete [] ptrarray;


    ///////////////// Filling DYN ARRAY // SIZE OF ARRAY  ////////////

    int num; // размер массива
    cout << "Enter integer value: ";
    cin >> num; // получение от пользователя размера массива

    int *p_darr = new int[num]; // Выделение памяти для массива
    for (int i = 0; i < num; i++) {
        // Заполнение массива и вывод значений его элементов
        p_darr[i] = i*2;
        cout << "Value of " << i << " element is " << p_darr[i] << endl;
    }
    delete [] p_darr; // очистка памяти


    return 0;
}
