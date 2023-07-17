//sum of even elements
#include <iostream>
using namespace std;

int main()
{
    int i,n,sum=0;

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++
    )
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }

    }
    cout<<sum;
}
