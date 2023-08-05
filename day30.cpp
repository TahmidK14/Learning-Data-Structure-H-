#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
void insert_at_end(struct node* head,int data)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=new node();

    temp->data=data;
    temp->link=NULL;

    while(ptr->link!=NULL)
    {
        ptr=ptr->link;

    }
    ptr->link=temp;
}
void print(struct node* head)
{
    if(head==NULL)
    {
        cout<<"Linked list mt";
    }
    struct node *ptr=NULL;
    ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";

        ptr=ptr->link;
    }

}
int main()
{
    struct node *head=new node();


    head->data=45;
    head->link=NULL;



    insert_at_end(head,48);
    insert_at_end(head,49);
    insert_at_end(head,43);
    insert_at_end(head,44);
    print(head);
}
