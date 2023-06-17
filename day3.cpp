//Linear search implementation
#include<iostream>
using namespace std;

int main()
{
  int i,n,key;
   cout<<"Enter array size"<<endl;
   cin>>n;
   int arr[n];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];

   }
   cout<<"Enter key"<<endl;
   cin>>key;

   for(int i=0;i<n;i++)
   {
       if(arr[i]==key)
       {
       cout<<"Index position of "<<key<<" is "<<i;
       }

   }
}
