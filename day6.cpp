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
        int current[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            current[i]=arr[i];
            for(int j=1;j<n;j++)
            {
                int comp[j];
                if(current[i]=comp[j])
                {
                 arr[i] = arr[i + 1];

                }
            }

            cout<<arr[i]<<" ";
        }cout<<endl;

    }
    else

    {
    cout<<"   !! Array size must be greater than 5 !!"<<endl;
    }
    return 0;

}
