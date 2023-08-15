#include <iostream>
using namespace std;
#define Max 100

int top = -1;
char Stack[Max];

void push(char);
char pop();
int isEmpty();
int isFull();
int check(char*, int);  
int match(char, char);

void push(char c)
{
    if (isFull())
    {
        cout << "Stack Overflow";
        return;
    }
    top++;
    Stack[top] = c;
}

char pop()
{
    char c;
    if (isEmpty())
    {
        cout << "Stack Underflow";
        return '\0';
    }
    c = Stack[top];
    top--;
    return c;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top == Max - 1)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cout << "Enter expression size:" << endl;
    cin >> n;
    char expression[n];

    if (n > Max)
    {
        cout << "Expression size exceeds maximum limit." << endl;
        return 1;
    }

    cout << "Enter expression :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> expression[i];
    }

    if (check(expression, n))
    {
        cout << "Balanced brackets." << endl;
    }
    else
    {
        cout << "Unbalanced brackets." << endl;
    }
}

int check(char* s, int n)  
{
    char temp;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
        {
            push(s[i]);
        }
        else if (s[i] == ']' || s[i] == '}' || s[i] == ')')
        {
            if (isEmpty())
            {
                cout << "Right brackets are more than left" << endl;
                return 0;
            }
            else
            {
                temp = pop();
                if (!match(temp, s[i]))
                {
                    cout << "Mismatch" << endl;
                    return 0;
                }
            }
        }
    }
    if (isEmpty())
    {
        return 1;
    }
    else
    {
        cout << "Left brackets are more than right" << endl;
        return 0;
    }
}

int match(char a, char b)
{
    if (a == '[' && b == ']')
        return 1;
    if (a == '{' && b == '}')
        return 1;
    if (a == '(' && b == ')')
        return 1;
    return 0;
}
