#include <iostream>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::insertNode(int insertData){
	root = insertNodeRecursive(root, insertData);
}

Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertData){
	if (currentRoot==NULL){
		currentRoot = new Node();
		currentRoot->data = insertData;
		return currentRoot;
	}
	
	if (insertData < currentRoot->data){
		currentRoot->left = insertNodeRecursive(currentRoot->left, insertData);
	}
	
	else if (insertData > currentRoot->data){
		currentRoot->right = insertNodeRecursive(currentRoot->right, insertData);
	}
	
	return currentRoot;
}




void BinaryTree::inOrder(){
	inOrderRecursive(root);
}

void BinaryTree::inOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		inOrderRecursive(currentRoot->left);
		cout << currentRoot->data << ", ";
		inOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::preOrder(){
	preOrderRecursive(root);
}

void BinaryTree::preOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		cout << currentRoot->data << ", ";
		preOrderRecursive(currentRoot->left);
		preOrderRecursive(currentRoot->right);
	}
}


void BinaryTree::postOrder(){
	postOrderRecursive(root);
}

void BinaryTree::postOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		postOrderRecursive(currentRoot->left);
		postOrderRecursive(currentRoot->right);
		cout << currentRoot->data << ", ";
	}
}
















