#include <stack>
#include <iostream>

using namespace std;

void notMain();

class Stack {
	private :	int array[10];
				int top;
	public :	Stack();
				void push (int num);
				int pop ();
	bool isEmpty();
};

Stack::Stack(){
	top = -1;
}

void Stack::push (int num){
	if (top == 9){
		cout << "Stack is full" << endl;
		return;
	}
	top++;
	array[top] = num;
}

bool Stack::isEmpty(){
	bool isTrue = true;
	if (top == -1){
		return false;
	}
	return isTrue;
}

int Stack::pop(){
	int pop = array[top];
	top--;
	return pop;
}

void notMain (){
	int num;
	int choice;
	Stack* stack = new Stack();
	
	do {
		cout << "Select 1 to add to stack, 2 to pop from stack, and 3 to end program" << endl;
		cin >> choice;
		
		if ( choice == 1){
			cout << "Enter a number into the stack" << endl;
			cin >> num;
			stack -> push(num);
		} else if (choice == 2){
			if (!stack -> isEmpty()){
				cout << "Stack is empty" << endl;
			} else {
				cout << "Stack popped: " << stack -> pop() << endl;
			}
		} else if (choice == 3){
			return;
		}
	} while (choice != 3);
	return;
}
