#include <iostream>
using namespace std;
#define SIZE 5

class stack {
private:
	int stack[SIZE];
	int top = -1;

public:
	void push(int value) {
		if (top == SIZE - 1) {
			cout << "Stack Overflow! Cannot push \n";
		}
		else {
			top++;
			stack[top] = value;
		}
	}

	void pop() {
		if (top == -1) {
			cout << "Stack Underflow! Cannot pop. Stack is empty. \n";
		}
		else {
			cout << "poped value is: " << stack[top--] << "\n";
		}
	}

	void peek() {
		if (top == -1) {
			cout << "Stack Underflow! Cannot peek. Stack is empty. \n";
		}
		else {
			cout << "the top value is: " << stack[top] << "\n";
		}
	}

	void display() {
		if (top == -1) {
			cout << "Stack Underflow! Cannot Display. Stack is empty. \n";
		}
		for(int i = top ; i>=0; i--)
		   cout << stack[i] << "  ";
		cout << "\n";
		
	}
};


int main() {

	stack stack;

	stack.peek();   // Attempt to peek from empty stack 
	stack.push(10); // Push 10
	stack.push(20); // Push 20
	stack.peek();   // Peek top element 20
	stack.push(30); // Push 30
	stack.peek();   // Peek top element 30
	stack.push(40); // Push 40
	stack.push(50); // Push 50
	stack.display();
	stack.pop();    // Pop 50
	stack.pop();    // Pop 40
	stack.pop();    // Pop 30
	stack.pop();    // Pop 20
	stack.pop();    // Pop 10
	stack.pop();    // Attempt to pop from empty stack

	
	return 0;
}