#include <iostream>

using namespace std;


void addRecord(studentCollection& sc, int stNum, int gr){

    listNode* newNode = new listNode;
    newNode->studentNum = stNum;
    newNode->grade = gr;
    newNode->next = sc;
    sc = newNode;
}

double averageRecord(studentCollection sc){

    int cnt = 0;
    double sum = 0;
    listNode * loopPtr = sc;
    while(loopPtr != NULL){
        sum += loopPtr-> grade;
        cnt++;
        loopPtr = loopPtr->next;
    }
    double average = sum/cnt;
    return average;

    if(sc==NULL)
        return 0;

}

int main()
{
    cout << "++++ LIST ++++" << endl;

    struct listNode{
        int studentNum;
        int grade;
        listNode* next;

    };
    typedef listNode * studentCollection;

    studentCollection sc;

    listNode * node1= new listNode;
    node1-> studentNum = 1020;
    node1 -> grade = 79;

    listNode * node2= new listNode;
    node2-> studentNum = 1045;
    node2 -> grade = 85;

    listNode * node3= new listNode;
    node3-> studentNum = 1011;
    node3 -> grade = 99;

    sc = node1;
    node1-> next = node2;
    node2-> next = node3;
    node3-> next = NULL;

    node1 = node2 = node3 = NULL;

    addRecord(sc, 1024, 56);

    return 0;
}
