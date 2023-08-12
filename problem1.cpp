#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* NewNode(int data)
{
    struct node* newNode=new node();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
};
struct node* insertNode(struct node* root,int data)
{
    if(root==NULL)
    {
        root=NewNode(data);
    }
    else if(data<root->data)
    {
        root->left=insertNode(root->left,data);
    }
    else
    {
        root->right=insertNode(root->right,data);
    }
    return root;
};

void printTree(struct node* root)
{
    if(root == NULL)
    {
        return;
    }
cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);

}
struct node* searchNode(struct node* root, int target)
{
    if (root == NULL || root->data == target)
    {
        return root;
    }

    if (target < root->data)
    {
        return searchNode(root->left, target);
    }

    return searchNode(root->right, target);
}
int main()
{
    struct node* root=NULL;
    root = insertNode(root, 5);
    root = insertNode(root, 3);
    root = insertNode(root, 7);
    root = insertNode(root, 2);
    root = insertNode(root, 4);
    printTree(root);

cout<<endl;
    int targetValue;
    cout << "Enter a value to search for: ";
    cin >> targetValue;

    struct node* foundNode = searchNode(root, targetValue);
    if (foundNode != NULL)
    {
        cout << "Value " << targetValue << " found in the tree." << endl;
    }
    else
    {
        cout << "Value " << targetValue << " not found in the tree." << endl;
    }
    return 0;
}


