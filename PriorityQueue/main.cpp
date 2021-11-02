#include <iostream>
#include <queue>

using namespace std;

int main()
{
    cout << "Priority Queue" << endl;

//    priority_queue <��� ������> <���>;

    /*  ������� � ����������� (priority_queue) � ��� ������� �������,
      �� � ��� ����� ������� ����������� � �� �����, ����� �������
      ���� ������������� �� ��������.
    */

    setlocale(LC_ALL,"rus");

    priority_queue <int> priority_q;  // ��������� ������������ �������

    cout << "������� 5 �����: " << endl;

    for (int j = 0; j < 5; j++)
    {
        int a;
        cin >> a;

        priority_q.push(a);  // ��������� �������� � �������
    }

    cout << "������ ������� �������: " << priority_q.top() << endl;  // ������� ������ �������

    cout << "���������� ��������� � �������: " << priority_q.size() << endl;
    cout << "������� ��������� � ������������ �������: ";

    // ��������� �������� ������� �� ������, � ������� �� ����������
    while(!priority_q.empty())
    {
        cout << priority_q.top() << " ";
        priority_q.pop();
    }


    return 0;
}
