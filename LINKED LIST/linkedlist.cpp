#include <iostream>
#include "linkedlist.h"

using namespace std; 

void Linkedlist :: insertToHead (int input){
	
	Node *newNode = new Node(); 
	newNode->value = input; 
	
	newNode->next =head; 
	head = newNode; 
	
	if (tail==NULL) 
		tail = head; 
}

void Linkedlist::insertToTail(int input) {
    Node* newNode = new Node();
    newNode->value = input;
    newNode->next = NULL;

    if (tail == NULL) {
        // Jika linked list masih kosong, atur head dan tail ke newNode
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}


void Linkedlist::insertAfter(int key, int input) {
    Node* newNode = new Node();
    newNode->value = input;

    Node* currentNode = head;
    while (currentNode != NULL && currentNode->value != key) {
        currentNode = currentNode->next;
    }

    if (currentNode == NULL) {
        // Node dengan nilai key tidak ditemukan
        delete newNode;
        return;
    }

    newNode->next = currentNode->next;
    currentNode->next = newNode;
    if (currentNode == tail) {
        tail = newNode;
    }
}



void Linkedlist::deleteFromHead() {
    if (head == NULL)
        return; // linked list kosong
    Node* temp = head;
    head = head->next;
    delete temp;

    if (head == NULL) // jika linked list kosong setelah menghapus head
        tail = NULL;  // atur tail menjadi NULL
}


void Linkedlist::deleteFromTail(){
    if (head == NULL) { // linked list kosong
        return;
    }
    if (head == tail) { 
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    Node* currentNode = head;
    while (currentNode->next != tail) {
        currentNode = currentNode->next;
    }
    delete tail;
    tail = currentNode;
    tail->next = NULL; // perbarui pointer next pada node tail
}

void Linkedlist::deleteByValue(int input)
{
	Node* tmpdel = NULL;
	Node* tmp = head;

	while (tmp != NULL && tmp->value != input)
	{
		tmpdel = tmp;
		tmp = tmp->next;
 }

	if (tmp != NULL)
	{
		if (tmp == head)
		{
			head = tmp->next;
		}
		else
		{
			tmpdel->next = tmp->next;
		}

		if (tmp == tail)
		{
			tail = tmpdel;
		}

		delete tmp;
	}

}


void Linkedlist :: printALL(){
	
	Node *tmp = head; 
	while (tmp!=NULL){
		cout << tmp->value << "->"; 
		tmp = tmp->next; 
	}
	
	
	cout << endl; 
}; 
