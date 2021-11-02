#include <iostream>
#include <queue>

using namespace std;

int main()
{
    cout << "Queue with LIB" << endl;

//    Дальше для объявления очереди нужно воспользоваться конструкцией ниже.
//
//    queue <тип данных> <имя>;

    setlocale(LC_ALL,"rus");
    queue <int> q;  // создали очередь q

    cout << "Пользователь, пожалуйста введите 7 чисел: " << endl;

    for (int h = 0; h < 7; h++)
    {
        int a;

        cin >> a;

        q.push(a);  // добавляем в очередь элементы
    }

    cout << endl;
    cout << "Самый первый элемент в очереди: " << q.front() << endl;  // выводим первый
    // элемент очереди
    q.pop();  // удаляем элемент из очереди

    cout << "Новый первый элемент (после удаления): " << q.front() << endl;
    cout << "Последный элемент : " << q.back() << endl;

    if (!q.empty()) cout << "Очередь не пуста!";  // проверяем пуста ли очередь (нет)

    return 0;
}
