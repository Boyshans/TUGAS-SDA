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
    Node *newNode = new Node();
    newNode->value = input;
    tail->next = newNode;
	tail = newNode;
    }

void Linkedlist::insertAfter(int key, int input){
	
	Node *newNode = new Node();
	newNode->value = key;
	
	Node *tmp = new Node();
	tmp->value = input;

	Node *currentNode = head;
	while (currentNode != NULL && currentNode->value != input) {
    currentNode = currentNode->next;
	}

	if (currentNode == NULL) {
    // Node dengan nilai input2 tidak ditemukan
    delete tmp;
    return;
	}
	
	tmp->next = currentNode->next;
	currentNode->next = tmp;
}

        
void Linkedlist::deleteFromHead(){
	
	if (head==NULL)
	return; // linked list kosong
	
	Node* temp = head; 
	head = head -> next; 
	delete temp; 
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

void Linkedlist :: printALL(){
	
	Node *tmp = head; 
	while (tmp!=NULL){
		cout << tmp->value << "->"; 
		tmp = tmp->next; 
	}
	
	
	cout << endl; 
}; 
