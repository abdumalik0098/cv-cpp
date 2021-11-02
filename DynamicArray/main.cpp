#include <iostream>

using namespace std;

int main()
{
    cout << "Dynamic Array" << endl;
    cout << endl;

    // create pointer
    int *ptr;


    // ������ ������������� �������� new
    int *ptrvalue = new int;
    //��� ptrvalue � ��������� �� ���������� ������� ������ ���� int
    //new � �������� ��������� ��������� ������ ��� ����������� ������.


    // ������ ������������� �������� delete:
    delete ptrvalue;
    // ��� ptrvalue � ��������� �� ���������� ������� ������ ���� int
    // delete � �������� ������������� ������

    //////////////////////////////////////
    //////////////////////////////////////

    // Create DYNAMIC ARRAY // Init ///////////////////

    // ���������� ����������� ������������� ������� �� 10 ���������:
    float *ptrarray = new float[5];
    //  ��� ptrarray  � ��������� �� ���������� ������� ������ ��� ������ ������������ �����  ���� float
    //      � ���������� ��������� ��������� ������ �������

    // Init

    int *array = new int[5] { 9, 7, 5, 3, 1 }; // �������������� ������������ ������


    //////// DELETE DYN ARRAY ////////////////////

    // ������������� ������ ��������� ��� ���������� ������������ ������:
    delete [] ptrarray;


    ///////////////// Filling DYN ARRAY // SIZE OF ARRAY  ////////////

    int num; // ������ �������
    cout << "Enter integer value: ";
    cin >> num; // ��������� �� ������������ ������� �������

    int *p_darr = new int[num]; // ��������� ������ ��� �������
    for (int i = 0; i < num; i++) {
        // ���������� ������� � ����� �������� ��� ���������
        p_darr[i] = i*2;
        cout << "Value of " << i << " element is " << p_darr[i] << endl;
    }
    delete [] p_darr; // ������� ������


    return 0;
}
