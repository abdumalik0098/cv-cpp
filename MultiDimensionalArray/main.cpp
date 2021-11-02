#include <iostream>

using namespace std;

int main()
{
    cout << "MultiDIM Array" << endl;
    cout << endl;

    // create
    int mularr[2][4]; // 2-элементный массив из 4-элементных массивов

    // Init
    // 1
    int mularray[3][5] =
    {
        { 1, 2, 3, 4, 5 }, // строка №0
        { 6, 7, 8, 9, 10 }, // строка №1
        { 11, 12, 13, 14, 15 } // строка №2
    };

    // 2
    int mularray2[3][5] =
    {
        { 2, 4  }, // строка №0 = 2, 4, 0, 0, 0
        { 1, 3, 7 }, // строка №1 = 1, 3, 7, 0, 0
        { 8, 9, 11, 12 } // строка №2 = 8, 9, 11, 12, 0
    };

    // 3
    int mularray3[][5] =
    {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15 }
    };


    //  Items
    int mularray4[4][7];
    mularray4[1][3] = 7;

    for (int row = 0; row < 3; ++row){
       for (int col = 0; col < 5; ++col){ // доступ к каждому элементу в строке
        cout << mularray[row][col];
        cout<<" ";
        }
        cout<<endl;
    } // доступ по строкам


    cout << endl;
    //////////////////////

    // Filling
    const  int DIM1 = 3;
    const  int DIM2 = 5;

    int ary[DIM1][DIM2];


    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            ary[i][j] = (i + 1) * 10 + (j + 1);
        }
    }

    // Output

    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            cout  << ary[i][j] <<" ";
        }
        cout << endl;
    }

    cout<<endl;
//////////////////////////////////

    // Объявляем массив 10x10
    const int numRows = 10;
    const int numCols = 10;
    int product[numRows][numCols] = { 0 };

    // Создаем таблицу умножения
    for (int row = 0; row < numRows; ++row)
        for (int col = 0; col < numCols; ++col)
            product[row][col] = row * col;

    // Выводим таблицу умножения
    for (int row = 1; row < numRows; ++row)
    {
        for (int col = 1; col < numCols; ++col)
            std::cout << product[row][col] << "\t";

        std::cout << '\n';
    }


    return 0;
}
