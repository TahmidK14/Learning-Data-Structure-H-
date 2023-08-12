#include<iostream>
using namespace std;
struct student
{
    string name;
    string id;
    double cgpa;
};
struct node
{
    student data;
    struct node* left;
    struct node* right;
};

struct node* NewNode(student data)
{
    struct node* newNode=new node();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
};
struct node* insertNode(struct node* root, student data)
{
    if (root == NULL)
    {
        root = NewNode(data);
    }
    else if (data.id < root->data.id)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}


void printTree(struct node* root)
{
    if (root == NULL)
    {
        return;
    }

    printTree(root->left);
    cout << "Name: " << root->data.name << ", ID: " << root->data.id << ", CGPA: " << root->data.cgpa << endl;
    printTree(root->right);
}
struct node* searchByID(struct node* root, string targetID)
{
    if (root == NULL || root->data.id == targetID)
    {
        return root;
    }

    if (targetID < root->data.id)
    {
        return searchByID(root->left, targetID);
    }

    return searchByID(root->right, targetID);
}
int main()
{
    struct node* root = NULL;
    int option;
    cout<<"                           1.Print data"<<endl;
    cout<<"                           2.Insert data"<<endl;
    cout<<"                           3.Search"<<endl;
while(true)
    {
    cout<<"Please choose an option"<<endl;



    cin>>option;
    switch(option)
    {
    case 1:
    printTree(root);
    break;
    case 2:
    int n;
    cout<<"Enter number of students :";
    cin>>n;
for(int i=0;i<n;i++)
    {
        student inputStudent;
        cout<<"Information of student "<<i+1<<endl;

        cout << "Enter student name : ";
        cin>>inputStudent.name;
        cout << "Enter student ID: ";
        cin>>inputStudent.id;
        cout << "Enter student CGPA: ";
        cin >> inputStudent.cgpa;

        cin.ignore();

        root = insertNode(root, inputStudent);
    }
    break;
    case 3:
    cout << "Enter student ID to search: ";
    string searchID;
    cin >> searchID;

    struct node* foundStudent = searchByID(root, searchID);
    if (foundStudent != NULL)
    {
        cout << "Student found: Name: " << foundStudent->data.name << ", ID: " << foundStudent->data.id << ", CGPA: " << foundStudent->data.cgpa << endl;
    }
    else
    {
        cout << "Student with ID " << searchID << " not found." << endl;
    }
        break;



    }
}

return 0;
}

