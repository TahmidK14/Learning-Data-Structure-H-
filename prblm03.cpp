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
    struct node* newNode = new node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

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

struct node* findMin(struct node* root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

struct node* deleteNode(struct node* root, string key)
{
    if (root == NULL)
    {
        return root;
    }

    if (key < root->data.id)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data.id)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            struct node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node* temp = root->left;
            delete root;
            return temp;
        }

        struct node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data.id);
    }
    return root;
}

int main()
{
    struct node* root = NULL;
    int option;
    string searchID;
    string deleteID;
    struct node* foundStudent = NULL;

    while (true)
    {
        cout << "1. Print data" << endl;
        cout << "2. Insert data" << endl;
        cout << "3. Search" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Exit" << endl;

        cout << "Please choose an option: ";
        cin >> option;

        switch (option)
        {
            case 1:
                printTree(root);
                break;
            case 2:
                // Insertion code here...
                break;
            case 3:
                cout << "Enter student ID to search: ";
                cin >> searchID;

                foundStudent = searchByID(root, searchID);
                if (foundStudent != NULL)
                {
                    cout << "Student found: Name: " << foundStudent->data.name << ", ID: " << foundStudent->data.id << ", CGPA: " << foundStudent->data.cgpa << endl;
                }
                else
                {
                    cout << "Student with ID " << searchID << " not found." << endl;
                }
                break;
            case 4:
                cout << "Enter student ID to delete: ";
                cin >> deleteID;

                root = deleteNode(root, deleteID);
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid option. Please choose a valid option." << endl;
                break;
        }
    }

    return 0;
}
