//Initialize an array. Size should be more than FIVE. Write you program to change the array in such a way so that there cannot be any duplicate element in the array anymore. Print the changed array. If the initialized array already had no duplicate elements from the beginning, output a message saying “Array already unique!”;
#include<iostream>
using namespace std;
int main()
{
    int i,n;

    cout<<"Enter size of array"<<endl;
    cin>>n;

    if(n>5)
    {
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int current=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(current==arr[j])
            {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }

    }
        for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }        
    }
    else

    {
    cout<<"   !! Array size must be greater than 5 !!"<<endl;
    }
    return 0;

}
