//Binary Search implementation
#include<iostream>
using namespace std;

int main()
{
 int i,n,key;
 cout<<"enter array size :"<<endl;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
 cin>>arr[i];
 }
 cout<<"enter key"<<endl;
 cin>>key;

 int s=0;
 int e=n-1;

while(s<=e)
{
    int mid=(s+e)/2;
    if(arr[mid]==key)
    {
     return mid;
    }
    else if(arr[mid]>key)
    {
        e=mid-1;
    }
    else
    {
    s=mid+1;
    }
}


}
