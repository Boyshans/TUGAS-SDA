#include <iostream>
#include "linkedlist.h"

using namespace std;

int main(int argc, char** argv) {

    Linkedlist list1;
    list1.insertToHead(10);
    list1.insertToHead(15);
    list1.insertToHead(30);

    cout << "head: " << list1.head->value << endl;
    cout << "Tail: " << list1.tail->value << endl;
    cout << list1.head->next->next->value << endl;

    list1.printALL();

    Linkedlist list2;
    list2.insertToHead(50);
    list2.insertToHead(20);
    list2.insertToTail(30);
    cout << "head: " << list2.head->value << endl;
    cout << "Tail: " << list2.tail->value << endl;

    list2.printALL();

    Linkedlist list3;
    list3.insertToHead(10);
    list3.insertAfter(10, 20);
    list3.insertAfter(20, 30);
    cout << "head: " << list3.head->value << endl;
    cout << "Tail: " << list3.tail->value << endl;

    list3.printALL();

    return 0;
}
