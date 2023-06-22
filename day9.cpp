//find smallest number from an array
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  int currentmin=arr[0];
    for(i=0;i<n;i++)
    {

        if(arr[i]<currentmin)
        {
            currentmin=arr[i];;
        }


    }

    cout<<currentmin;


}

