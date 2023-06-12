#include <iostream>
#include "BinaryTree.h"

// I GDE MADE HANURA
// 2215101062

using namespace std;
// implementasikan search node, find min, find max. 
int main(int argc, char** argv) {
	
	BinaryTree bin;
	
	bin.insertNode(10);
	bin.insertNode(5);
	bin.insertNode(3);
	bin.insertNode(2);
	bin.insertNode(6);
	bin.insertNode(15);
	bin.insertNode(20);
	
	
	cout << endl << "====TRAVERSAL====" ; 
	cout << endl << "In-Order Traversal   : ";
	bin.inOrder();
	
	cout << endl << "Pre-Order Traversal  : ";
	bin.preOrder();
	
	cout << endl << "Post-Order Traversal : ";
	bin.postOrder();
	
	cout <<"\n" << endl << "====MAX AND MIN====\n";
	bin.findMax(); 
	bin.findMin(); 
	
	cout <<"\n" << endl << "===SEARCH NODE===";
	int searchNode;
	cout << "\nMasukan Node :"; 
	cin >> searchNode;
	bin.searchNode(searchNode); 
	
	
	return 0;
}
