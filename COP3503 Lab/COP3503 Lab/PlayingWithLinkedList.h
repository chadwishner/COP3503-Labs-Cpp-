#include <iostream>
using namespace std;

struct node{
	int number;
	node * next;
};

bool isEmpty(node * head);
char menu();
void insertAsFirstElement(node * &head, node * &last, int number);
void insert(node * &head, node * &last, int number);
void remove(node * &head, node * &last);
void showList(node * current);


bool isEmpty(node * head){
	if (head == NULL){
		return true;
	} else {
		return false;
	}
}

char menu(){
	char choice;
	cout << "\n\nMenu\n";
	cout << "1. Add an item \n";
	cout << "2. Remove an item \n";
	cout << "3. Show the list \n";
	cout << "4. Exit \n";

	cin >> choice;
	
	return choice;
}

void insertAsFirstElement(node * &head, node * &last, int number){
	node * temp = new node;
	temp -> number = number;
	temp -> next = NULL;
	head = temp;
	last = temp;
}
void insert(node * &head, node * &last, int number){
	if (isEmpty(head)){
		insertAsFirstElement(head, last, number);
	} else {
		node * temp = new node;
		temp -> number = number;
		temp -> next = NULL;
		last -> next = temp;
		last = temp;
	}
}
void remove(node * &head, node * &last){
	if (isEmpty(head)){
		cout << "The list is already empty";
	} else if (head == last){
		delete head;
		head = NULL;
		last = NULL;
	} else {
		node * temp = head;
		head = head -> next;
		delete temp;
	}
}
void showList(node * current){
	if (isEmpty(current)){
		cout << "The list is empty";
	} else{
		cout << "The list contains: \n";
		while (current != NULL){
			cout << current -> number <<endl;
			current = current -> next;
		}
	}
}
