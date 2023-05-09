#include <iostream>
#include "linkedlist.h"

using namespace std;

int main(int argc, char** argv) {
	
	

    Linkedlist list1;
    list1.insertToHead(10);
    list1.insertToHead(15);
    list1.insertToHead(30);
    cout << "=== Insert To Head ===" << endl; 
    cout << "head: " << list1.head->value << endl;

    
    list1.printALL();
    cout<<endl; 

    Linkedlist list2;
    list2.insertToHead(50);
    list2.insertToHead(20);
    list2.insertToTail(30);
    cout << " === Insert To Tail ===" << endl; 
    cout << "head: " << list2.head->value << endl;
    cout << "Tail: " << list2.tail->value << endl;

    list2.printALL();
    cout << endl;

    Linkedlist list3;
    list3.insertToHead(10);
    list3.insertAfter(10, 20);
    list3.insertAfter(20, 30);
    cout << " === Insert After ==="<< endl; 
    cout << "head: " << list3.head->value << endl;
    cout << "Tail: " << list3.tail->value << endl;

    list3.printALL();
    cout << endl; 
    
    Linkedlist list4; 
    list4.insertToHead(10);
    list4.insertAfter(10,20); 
    list4.insertAfter(20,30); 
    cout <<" === Delete From Head ===" << endl; 
    cout <<"head: " << list4.head->value << endl; 
    cout <<"tail: " << list4.tail->value << endl; 
    list4.printALL(); 
    cout<<endl; 
    
    list4.deleteFromHead();
    cout <<"head: " << list4.head-> value << endl; 
    cout <<"tail: " << list4.tail-> value << endl; 
    list4.printALL(); 
    cout<<endl; 
    
    
    Linkedlist list5; 
    list5.insertToHead(10);
    list5.insertAfter(10,30); 
    list5.insertAfter(30,40); 
    cout << " === Delete From Tail ===" << endl; 
    cout <<"head: " << list5.head-> value << endl; 
    cout << "tail: " << list5.tail-> value << endl; 
    list5.printALL(); 
    cout << endl; 
    
    list5.deleteFromTail(); 
     cout <<"head: " << list5.head-> value << endl; 
    cout << "tail: " << list5.tail-> value << endl; 
    list5.printALL(); 
    cout<< endl; 
    return 0;
}

