#include<iostream>
using namespace std;
#define n 5

class Queue
{
public:
    int arr[n];
    int front = 0;
    int rear = -1;

    int enqueue(int val)
    {
        if(rear >= n-1){
            cout<<"Queue is full..."<<endl;
            return 0;
        }
        arr[++rear] = val;
        return 0;
    }
    int dequeue()
    {

        if(rear < front){
            cout<<"Queue is empty..."<<endl;
            return 0;
        }

        ++front;
        return 0;
    }
    void printQueue()
    {
        for(int i=front; i<=rear; i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
};

int main()
{
    Queue x;
    x.enqueue(1);
    x.enqueue(2);
    x.enqueue(3);
    x.printQueue();
    x.dequeue();
    x.dequeue();
    x.printQueue();
    return 0;

    return 0;
}
