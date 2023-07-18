// finding maximum difference
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int minelement=arr[0];
     int maxdifference=0;

    for(int i=1;i<n;i++)
    {
        if(arr[i]<minelement)
        {
            minelement=arr[i];
        }
        else if(arr[i]-minelement>maxdifference)
        {
            maxdifference=arr[i]-minelement;
        }
    }
    cout<<maxdifference;
}
