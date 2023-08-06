#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
void count_nodes(struct node* head)
{
    int count =0;
    if(head==NULL)
    {
        cout<<"Linked list mt";
    }
    struct node *ptr=NULL;
    ptr = head;
    while(ptr != NULL)
    {
        count++;
        ptr=ptr->link;
    }
    cout<<count<<endl;
}
void add_at_head(struct node*& head,int data)
{
    struct node* ptr=new node();
    ptr->data=data;
    ptr->link=NULL;

    ptr->link=head;
    head=ptr;

}
void add_at_pos(struct node* head,int data,int pos)
{
    struct node *ptr =head;
    struct node *ptr2= new node();
    ptr2->data=data;
    ptr2->link=NULL;

    pos--;
    while(pos != 1)
    {
        ptr =ptr->link;
        pos--;
    }
    ptr2->link=ptr->link;
    ptr->link=ptr2;
}
void insert_at_end(struct node*& head,int data)
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
    add_at_head(head,20);
    add_at_pos(head,34,4);
    print(head);
}
