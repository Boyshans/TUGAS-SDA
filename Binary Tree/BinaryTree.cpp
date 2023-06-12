#include "iostream"
#include "BinaryTree.h"

using namespace std; 


BinaryTree::BinaryTree() {
    root = NULL;
}

void BinaryTree::insertNode(int insertData){
	root = insertNodeRecursive(root, insertData); 
}

Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertData){
	
	if (currentRoot==NULL){ 
		currentRoot=new Node(); // buat node baru
		currentRoot->data = insertData; // masukan datanya
		return currentRoot; // kembalikan pada parent nya
	}
	
	if (insertData < currentRoot->data){
		currentRoot->left= insertNodeRecursive(currentRoot->left, insertData); 
	}
	
	else if (insertData > currentRoot->data){
		currentRoot->right = insertNodeRecursive (currentRoot->right, insertData); 
	}
	
	return currentRoot; 
}

void BinaryTree::inOrder( ){
	inOrderRecursive(root); 
}

void BinaryTree::inOrderRecursive(Node *currentRoot){
	
	if (currentRoot!=NULL){
		inOrderRecursive(currentRoot->left); 
		cout << currentRoot->data << ", " ; 
		inOrderRecursive(currentRoot->right); 
	}
	
}

void BinaryTree::postOrder( ){
	postOrderRecursive(root); 
}

void BinaryTree::postOrderRecursive(Node *currentRoot){
	
	if (currentRoot!=NULL){
		postOrderRecursive(currentRoot->left); 
		postOrderRecursive(currentRoot->right); 
		cout << currentRoot->data << ", " ; 
	}
	
}

void BinaryTree::preOrder( ){
	preOrderRecursive(root); 
}

void BinaryTree::preOrderRecursive(Node *currentRoot){
	
	if (currentRoot!=NULL){
		
		cout << currentRoot->data << ", " ;
		preOrderRecursive(currentRoot->left); 
		preOrderRecursive(currentRoot->right); 
		 
	}
	
}


void BinaryTree::findMax() {
    Node* maxNode = findMaxRecursive(root);
    if (maxNode != NULL) {
        cout << "Max Value: " << maxNode->data << endl;
    } else {
        cout << "Tree is empty." << endl;
    }
}

Node* BinaryTree::findMaxRecursive(Node* currentRoot) {
    if (currentRoot == NULL) {
        return NULL;
    } else if (currentRoot->right == NULL) {
        return currentRoot;
    } else {
        return findMaxRecursive(currentRoot->right);
    }
    
	}
	
void BinaryTree::findMin() {
    Node*minNode=findMinRecursive(root);
    if (minNode!= NULL) {
        cout << "Min Value: " << minNode->data << endl;
    } else {
        cout << "Tree is empty." << endl;
    }
}

Node*BinaryTree::findMinRecursive(Node* currentRoot) {
 if (currentRoot==NULL){
 	return NULL; 
 } else if (currentRoot->left == NULL) {
        return currentRoot;
    } else {
        return findMinRecursive(currentRoot->left);
    }
}

void BinaryTree::searchNode(int nilai) {
    Node* hasil = searchNodeRecursive(root, nilai);
    if (hasil != NULL) {
        cout << "Node dengan nilai " << hasil->data << " ditemukan" << endl;
    } else {
        cout << "Node tidak ditemukan" << endl;
    }
}


Node* BinaryTree::searchNodeRecursive(Node*currentRoot, int nilai){
	
	if (currentRoot == NULL || currentRoot->data == nilai) {
        return currentRoot;
    } else if (nilai < currentRoot->data) {
        return searchNodeRecursive(currentRoot->left, nilai);
    } else {
        return searchNodeRecursive(currentRoot->right, nilai);
    }
	
	return currentRoot; 
}


