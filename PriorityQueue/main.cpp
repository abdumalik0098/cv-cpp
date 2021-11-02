#include <iostream>
#include <queue>

using namespace std;

int main()
{
    cout << "Priority Queue" << endl;

//    priority_queue <тип данных> <имя>;

    /*  Очередь с приоритетом (priority_queue) — это обычная очередь,
      но в ней новый элемент добавляется в то место, чтобы очередь
      была отсортирована по убыванию.
    */

    setlocale(LC_ALL,"rus");

    priority_queue <int> priority_q;  // объявляем приоритетную очередь

    cout << "Введите 5 чисел: " << endl;

    for (int j = 0; j < 5; j++)
    {
        int a;
        cin >> a;

        priority_q.push(a);  // добавляем элементы в очередь
    }

    cout << "Первый элемент очереди: " << priority_q.top() << endl;  // выводим первый элемент

    cout << "Количество элементов в очереди: " << priority_q.size() << endl;
    cout << "Порядок элементов в приоритетной очереди: ";

    // выгружаем элементы очереди по одному, в порядке их приоритета
    while(!priority_q.empty())
    {
        cout << priority_q.top() << " ";
        priority_q.pop();
    }


    return 0;
}
