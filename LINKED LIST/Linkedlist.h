class Node { // membuat class
	
	public: 
		int value; // atribut data value
		Node *next; // pointer untuk node selanjutnya

		Node (){ // constructor: method yang dipanggil pertama kali
			next = NULL;  // setiap membuat node baru akan NULL; 
		
	}	
};

class Linkedlist {
	
	public: 
		Node *head; 
		Node *tail; 
		void insertToHead(int); 
		void insertToTail(int); 
		void insertAfter (int, int); // data, diinsert setelah node ini
		
		void deleteFromHead(); 
		void deleteFromTail(); 
		void deleteByValue(int); 
		
		void printALL(); 
		Linkedlist (){
			head = tail = NULL; // memastikan bahwa head dan tail menunjuk null 
		}
		
		
};
