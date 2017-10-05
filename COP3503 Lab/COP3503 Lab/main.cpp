#include "HelloWorld.h"
#include "PrimeNumber.h"
#include "PowerOfTwo.h"
#include "PlayingWithLinkedList.h"

#include <iostream>
using namespace std;

////MAIN FOR EVERYTHING
//int main(){
//	//CALL
//	}

//MAIN for Linked List
int main(){
	
	node * head = NULL;
	node * last = NULL;
	char choice;
	int number;
	
	do {
		choice = menu();
		switch(choice){
			case '1':	cout << "Please enter a number: ";
				cin >> number;
				insert(head, last, number);
				break;
			case '2':	remove(head, last);
				break;
			case '3':	showList(head);
				break;
			default: cout << "System exit\n";
		}
	}while (choice != '4');
	
	return 0;
}

