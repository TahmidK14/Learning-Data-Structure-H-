#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = NULL;
    }
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }
    void pop() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    void display() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        cout << "Stack elements are: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack stk;
    cout << "Input some elements onto the stack (using linked list):\n";
    stk.push(6);
    stk.push(5);
    stk.push(3);
    stk.push(1);    
	stk.display();
	cout << "\nRemove 2 elements from the stack:\n";
    stk.pop();
    stk.pop();
    stk.display();
    cout << "\nInput 2 more elements:\n";
    stk.push(8);
    stk.push(9);
    stk.display();
    return 0;
}
