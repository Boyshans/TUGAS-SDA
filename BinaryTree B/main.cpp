#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main(int argc, char** argv) {
	
	BinaryTree bin;
	
	bin.insertNode(10);
	bin.insertNode(5);
	bin.insertNode(3);
	bin.insertNode(2);
	bin.insertNode(6);
	bin.insertNode(15);
	bin.insertNode(20);
	
	cout << endl << "In-Order Traversal: ";
	bin.inOrder();
	
	cout << endl << "Pre-Order Traversal: ";
	bin.preOrder();
	
	cout << endl << "Post-Order Traversal: ";
	bin.postOrder();
	
	return 0;
}
