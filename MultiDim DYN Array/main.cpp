#include <iostream>

using namespace std;

const unsigned int DIM1 = 3;
const unsigned int DIM2 = 5;

int main()
{
    cout << "MULTI DIM DYN ARRAY!" << endl;
    cout  << endl;



    int **ary;    // (1)

    // создание
    ary = new int * [DIM1];    // массив указателей (2)
    for (int i = 0; i < DIM1; i++) {   // (3)
        ary[i] = new int [DIM2];     // инициализация указателей
    }

    // работа с массивом
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            ary[i][j] = (i + 1) * 10 + (j + 1);
        }
    }

    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            cout << " " << ary[i][j];
        }
        cout << endl;
    }

    // уничтожение
    for (int i = 0; i < DIM1; i++) {
        delete [] ary[i];
    }
    delete [] ary;


    cout<< endl;

    ///////////////

    const unsigned int DIM11 = 3;
    const unsigned int DIM22 = 5;
    const unsigned int DIM33 = 2;


    int ***ary2;

    int cnt = 1;

    // создание
    ary2 = new int ** [DIM11];
    for (int i = 0; i < DIM11; i++) {
        ary2[i] = new int * [DIM22];
        for (int j = 0; j < DIM22; j++) {
            ary2[i][j] = new int [DIM33];
        }
    }

    // работа с массивом
    for (int i = 0; i < DIM11; i++) {
        for (int j = 0; j < DIM22; j++) {
            for (int k = 0; k < DIM33; k++) {
                ary2[i][j][k] = cnt++;
                cout << " "<< ary2[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }

    // уничтожение
    for (int i = 0; i < DIM11; i++) {
        for (int j = 0; j < DIM22; j++) {
            delete [] ary2[i][j];
        }
        delete [] ary2[i];
    }
    delete [] ary2;

    return 0;
}
