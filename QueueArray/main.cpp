#include <iostream>

using namespace std;

int main()
{
    cout << "Queue with Array" << endl;
    setlocale(LC_ALL,"rus");
    int q[5];  // ������� ������ q
    int start = 0, ends = 0;  // ������� ���������� ������ � ����� �������

    cout << "������������, ���������� ������� 5 �����: " << endl;

    for (int h = 0; h < 5; h++)
    {
        int a;

        cin >> a;

        q[ends++] = a;  // ��������� �������� � �������(������)

    }

    cout << "����� ������ ������� � �������: " << q[start] << endl;

    start++;  // ������� ������ �������(��������� start �� 1)

    cout << "����� ������ ������� (����� ��������): " << q[start] << endl;

    cout << "����� ��������� ������� � �������: " << q[ends-1] << endl;  // ������� ���������
    // ������� �������
    if (start != ends) cout << "������� �� �����!";  // ��������� ����� �� �������

    return 0;
}
