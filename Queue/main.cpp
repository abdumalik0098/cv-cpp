#include <iostream>
#include <queue>

using namespace std;

int main()
{
    cout << "Queue with LIB" << endl;

//    ������ ��� ���������� ������� ����� ��������������� ������������ ����.
//
//    queue <��� ������> <���>;

    setlocale(LC_ALL,"rus");
    queue <int> q;  // ������� ������� q

    cout << "������������, ���������� ������� 7 �����: " << endl;

    for (int h = 0; h < 7; h++)
    {
        int a;

        cin >> a;

        q.push(a);  // ��������� � ������� ��������
    }

    cout << endl;
    cout << "����� ������ ������� � �������: " << q.front() << endl;  // ������� ������
    // ������� �������
    q.pop();  // ������� ������� �� �������

    cout << "����� ������ ������� (����� ��������): " << q.front() << endl;
    cout << "��������� ������� : " << q.back() << endl;

    if (!q.empty()) cout << "������� �� �����!";  // ��������� ����� �� ������� (���)

    return 0;
}
