// Accessing Elements of an Array Using Pointer

#include <iostream>
using namespace std;

int main()
{
   int a[100],n,i;
   cout<<"Enter size of Array :: ";
    cin>>n;
    cout<<"\nEnter elements to the array :: \n";

    for(i=0;i<n;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: ";
        cin>>a[i];
    }

   cout << "Accessing Elements through Pointers are :: \n";
   for(int i = 0; i < n; ++i)
   {
       cout << endl << *(a + i);
   }

    cout<<"\n";

   return 0;
}
