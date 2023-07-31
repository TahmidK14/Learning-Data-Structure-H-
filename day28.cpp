#include<iostream>
using namespace std;

class node
{
public:
    int value;
    node* next;


    node(int val) : value(val), next(NULL) {}

    void insertAtTail(int value) {
        node* newNode = new node(value);
        if (next == NULL) {
            next = newNode;
        } else {
            node* current = this;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
};

int main()
{

    node* head = new node(1);
    head->insertAtTail(2);
    head->insertAtTail(3);


    node* current = head;
    while (current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }

    return 0;
}
