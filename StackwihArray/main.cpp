#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Stack with Array" << endl;

    int steck[20];
    int i = -1;  // �������� ����

    for (int j = 0; j < 6; j++)
    {
        int a;

        cin >> a;

        i++;  // ����������� i �� ����


        steck[i] = a;  // ��������� � ���� �������
    }

    if (i == -1) cout << "���� ����";  // ��������� ���� �� ���� (���)

    cout << steck[i] << " ��� ������� ������� �����" << endl;

    cout << "������ �� ������ ������� �������" << endl;

    i--;  // ��������� i �� ����

    cout << steck[i] << " ��� ������� ������� �����" << endl;

    return 0;
}
