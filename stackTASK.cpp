#include<iostream>
using namespace std;
#define n 3

class Stack
{
public:
    int top = -1;
    string callLogs[n][n];

    bool isfull()
    {
        if (top == n - 1)
        {
            return true;
        }
        return false;
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }

    void push(string data)
    {
        if (!isfull())
        {
            top++;
            callLogs[0][top] = data;
        }
    }
    string pop()
    {
        string data;
        if(!isempty())
        {
            data=callLogs[n-1][top];
            top--;
            return data;

        }
        else{cout<<"Empty List";}
    }

};

class CallHistory : public Stack
{
public:
    void input()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter name, phone number & time for caller " << i + 1 << endl;
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    cout << "Name: ";
                }
                else if (j == 1)
                {
                    cout << "Phone number: ";
                }
                else if (j == 2)
                {
                    cout << "Time: ";
                }
                cin >> callLogs[i][j];
            }
        }
    }

    void pushCALLLOGS()
    {
        input();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                push(callLogs[i][j]);
            }
        }
    }
    void popCALLLOGS()
    {
        cout<<"Popped information are : ";
        while(!isempty())
     {
       string data=pop();
         cout<<data<<"  ";
   }cout<<endl;
        callLogs[n-1][0] = "";
        callLogs[n-1][1] = "";
        callLogs[n-1][2] = "";
        cout<<endl;
        cout<<"Updated Logs:"<<endl;

    }

    void Display()
    {
        for (int i =n-1; i >= 0; i--)
        {
            cout << "Caller " << i + 1 << " : ";
            for (int j = 0; j < n; j++)
            {
                cout << callLogs[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    CallHistory s1;
    int option;
    cout<<"                           1.Push CallLogs"<<endl;
    cout<<"                           2.Pop CallLogs"<<endl;
    cout<<"                           3.View CallLogs"<<endl;
    cout<<"                           4.Exit"<<endl;
while(true)
    {
    cout<<"Please choose an option"<<endl;



    cin>>option;
    switch(option)
    {
    case 1:
    s1.pushCALLLOGS();
    s1.Display();
    break;
    case 2:
    s1.popCALLLOGS();
    s1.Display();
    break;
    case 3:
    s1.Display();
        break;
    case 4:
        return 0;


    }
}

}
