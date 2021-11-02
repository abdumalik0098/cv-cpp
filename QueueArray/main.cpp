#include <iostream>

using namespace std;

int main()
{
    cout << "Queue with Array" << endl;
    setlocale(LC_ALL,"rus");
    int q[5];  // создали массив q
    int start = 0, ends = 0;  // создали переменные начала и конца очереди

    cout << "Пользователь, пожалуйста введите 5 чисел: " << endl;

    for (int h = 0; h < 5; h++)
    {
        int a;

        cin >> a;

        q[ends++] = a;  // добавляем элементы в очередь(массив)

    }

    cout << "Самый первый элемент в очереди: " << q[start] << endl;

    start++;  // удаляем первый элемент(уменьшаем start на 1)

    cout << "Новый первый элемент (после удаления): " << q[start] << endl;

    cout << "Самый последний элемент в очереди: " << q[ends-1] << endl;  // выводим последний
    // элемент очереди
    if (start != ends) cout << "Очередь не пуста!";  // проверяем пуста ли очередь

    return 0;
}
