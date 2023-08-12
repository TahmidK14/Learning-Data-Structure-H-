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
void delete_first(struct node*& head)
{
    if(head==NULL)
    {
        cout<<"mt";
    }
    else
    {
        struct node* temp=head;
        head=head->link;
        delete temp;
    }
}
void delete_last(struct  node* head)
{
    if(head==NULL)
    {
        cout<<"mt";
    }
    else if(head->link==NULL)
    {
        delete head;
        head=NULL;
    }
    else
    {
        struct node* temp=head;
        struct node* temp2=head;
        while(temp->link!=NULL)
        {
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        delete temp;
        temp=NULL;
    }
}
void delete_pos(struct node**head,int pos)
{
    struct node* current=*head;
    struct node* previous=*head;
    if(*head==NULL)
    {
        cout<<"MT";
    }
    else if(pos==1)
    {
        *head=current->link;
        delete current;
        current=NULL;
    }
    else
    {
        while(pos!=1)
        {
            previous=current;
            current=current->link;
            pos--;
        }
        previous->link=current->link;
        delete current;
        current=NULL;
    }
}
void search_node(struct node* head,int key)
{


    struct node *ptr=NULL;
    ptr = head;
    while(ptr !=NULL)
    {
        if(ptr->data==key)
        {
            cout<<key<<" found in List"<<endl;
            break;
        }

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
    delete_first(head);
    delete_last(head);
    delete_pos(&head,3);
    print(head);
    cout<<endl;
    search_node(head,43);
}
