#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "VECTOR" << endl;
    cout<<endl;

    // Create and Init
    vector<int> myVector1; // �� ������� ������ ������ ���� int
    myVector1.reserve(8);      // ��� �� ��������������� ������ ��� 8 ��������� ���� int

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
    // ����� ��������� ������� �� �����
    cout<<endl;
    cout << "Orginal array: ";
    for(int i = 0; i < myVector3.size(); i++) {
        myVector3[i] = i;
        cout << myVector3[i] << ' ';
    }
    cout<<endl;
    cout << "Copy array: ";
    vector<int> myVector4(myVector3); // ��� ���������� ������� �������, ���������� - ������
    for(int i = 0; i < myVector4.size(); i++) {
        myVector4[i] = i;
        cout << myVector4[i] << ' ';
    }

    cout<<endl;

    return 0;
}
