#include <iostream>

using namespace std;

int main()
{
    cout << "Arrays in C++" << endl;
    cout << endl;

    // Create array
    int cr_arr[5];

    // Save values // Initialization
    int sv_arr[6]={23, 45, 78, 56, 9, 45};

    // Output by index
    cout << "Output by index" << endl;

    cout << sv_arr[5] <<endl;
    cout << endl;

    // Output All
    cout << "Output All" << endl;

    for(int i=0; i<6; i++)
    {
       cout << sv_arr[i] <<endl;
    }

    cout << endl;

    // Filling - Заполнение
    cout << "Filling and Output" << endl;

    int fillarr[10];
    for(int i=0; i<10; i++)
    {
        fillarr[i]=(i*3);
    }
    // Output All
    for(int i=0; i<10; i++)
    {
       cout << fillarr[i] <<endl;
    }

    cout << endl;

    /////////////////////////////////////////////////

    // Copy arrays
    cout << "Copy arrays" << endl;

    int Orginal[7]={12, 3, 45, 67, 87, 78, 89};
    int Copy[7];

    for(int i=0; i<7; i++)
    {
        Copy[i]= Orginal[i];
    }
    // Output All
    for(int i=0; i<7; i++)
    {
       cout << Copy[i] <<endl;
    }

    cout << endl;


    // Check values
    cout << "Check values" << endl;

    const int ARRSIZE = 9;
    int CheckVall[ARRSIZE]={12, 3, 45, 67, 87, 78, 89, 76, 99};


    for(int i=0; i<ARRSIZE; i++)
    {
        if (CheckVall[i] == 78)
        {
            cout << CheckVall[i];
        }
    }

    cout << endl;



    return 0;
}
