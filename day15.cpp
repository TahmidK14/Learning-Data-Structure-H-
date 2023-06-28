//find Average of n Numbers using array

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float a[100], sum=0.0 , average;

    cout<<"Enter size of Array :: "<<endl;
    cin>>n;
    cout<<"Enter elements to the array :: "<<endl;

    for(i=0;i<n;++i)
    {
        cout<<"Enter "<<i+1<<" element :: "<<endl;
        cin>>a[i];
        sum += a[i];
    }

    average = sum / n;
    cout << "Average of "<<n<<" Numbers is = " << average<<endl;

    return 0;
}
