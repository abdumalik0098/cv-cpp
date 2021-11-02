#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "VECTOR" << endl;
    cout<<endl;

    // Create and Init
    vector<int> myVector1; // мы создали пустой вектор типа int
    myVector1.reserve(8);      // тут мы зарезервировали пам€ть под 8 элементов типа int

    // 2 - variant
    vector<int> myVector2(10);

    // Filling
    for(int i = 0; i < myVector2.size(); i++){
        myVector2[i] = i*2;
        cout << myVector2[i] << ' ';
    }
    cout<<endl;

    // Copy

    vector<int> myVector3(10);
    // вывод элементов вектора на экран
    cout<<endl;
    cout << "Orginal array: ";
    for(int i = 0; i < myVector3.size(); i++) {
        myVector3[i] = i;
        cout << myVector3[i] << ' ';
    }
    cout<<endl;
    cout << "Copy array: ";
    vector<int> myVector4(myVector3); // при объ€влении второго вектора, копируетс€ - первый
    for(int i = 0; i < myVector4.size(); i++) {
        myVector4[i] = i;
        cout << myVector4[i] << ' ';
    }

    cout<<endl;

    return 0;
}
