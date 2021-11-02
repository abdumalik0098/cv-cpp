#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Vector operation" << endl;

    std::vector<int> v1;              // ������ ������
    std::vector<int> v2(v1);          // ������ v2 - ����� ������� v1
    std::vector<int> v3 = v1;         // ������ v3 - ����� ������� v1
    std::vector<int> v4(5);               // ������ v4 ������� �� 5 �����
    std::vector<int> v5(5, 2);            // ������ v5 ������� �� 5 �����, ������ ����� ����� 2
//    std::vector<int> v6{1, 2, 4, 5};  // ������ v6 ������� �� ����� 1, 2, 4, 5
//    std::vector<int> v7 = {1, 2, 3, 5}; // ������ v7 ������� �� ����� 1, 2, 4, 5



    /////// //// ///
/*
    vector <int> numbers = {1, 2, 3, 4, 5};

    int n1 = numbers.front();   // n1 = 1
    int n2 = numbers.back();    // n2 = 5
    int x = numbers[1]; // x = 2
    numbers[0] = 6;

    for(int n : numbers)
        cout << n << "\t";  // 6  2  3  4  5

    cout << endl;

    */
    /////////////////
/*
    std::vector<int> numbers;     // ������ ������
    numbers.push_back(5);
    numbers.push_back(3);
    numbers.push_back(10);
    for(int n : numbers)
        cout << n << "\t";      // 5    3   10
*/
    ///////////

    /*
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    auto iter = numbers.cbegin();   // ����������� �������� ��������� �� ������ �������
    numbers.emplace(iter + 2, 8); // ��������� ����� ������� ��������  numbers = { 1, 2, 8, 3, 4, 5};
    */



    /*
    std::vector<int> numbers1 = { 1, 2, 3, 4, 5 };
auto iter1 = numbers1.cbegin(); // ����������� �������� ��������� �� ������ �������
numbers1.insert(iter1 + 2, 8); // ��������� ����� ������� ��������
//numbers1 = { 1, 2, 8, 3, 4, 5};

std::vector<int> numbers2 = { 1, 2, 3, 4, 5 };
auto iter2 = numbers2.cbegin(); // ����������� �������� ��������� �� ������ �������
numbers2.insert(iter2 + 1, 3, 4); // ��������� ����� ������� �������� ��� ��������
//numbers2 = { 1, 4, 4, 4, 2, 3, 4, 5};

std::vector<int> values = { 10, 20, 30, 40, 50 };
std::vector<int> numbers3 = { 1, 2, 3, 4, 5 };
auto iter3 = numbers3.cbegin(); // ����������� �������� ��������� �� ������ �������
// ��������� ����� ������� �������� ��� ������ �������� �� ������� values
numbers3.insert(iter3 + 1, values.begin(), values.begin() + 3);
//numbers3 = { 1, 10, 20, 30, 2, 3, 4, 5};

std::vector<int> numbers4 = { 1, 2, 3, 4, 5 };
auto iter4 = numbers4.cend();   // ����������� �������� ��������� �� ������� �� ��������� ���������
// ��������� � ����� ������� numbers4 �������� �� ������ { 21, 22, 23 }
numbers4.insert(iter4, { 21, 22, 23 });
//numbers4 = { 1, 2, 3, 4, 5, 21, 22, 23};
*/

    return 0;
}
