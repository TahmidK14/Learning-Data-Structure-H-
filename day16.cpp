/*  Multiply Two Matrices using array  */

#include<iostream>
using namespace std;

int main()
{

        int arr1[5][5], arr2[5][5], arr3[5][5], sum=0, i, j, k,m,n;

        cout<<"Enter size of matrix ( Max:5 ) :: ";
    cin>>m;
    cout<<"\nEnter Elements to Matrix A Below ::"<<endl;

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"Enter arr1["<<i<<"]["<<j<<"] Element :: "<<endl;
            cin>>arr1[i][j];
        }

    }

    cout<<"Enter Elements to Matrix B Below :: "<<endl;

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"Enter arr2["<<i<<"]["<<j<<"] Element :: "<<endl;
            cin>>arr2[i][j];
        }

    }

        cout<<"Multiplying two matrices....."<<endl;
        for(i=0; i<3; i++)
        {
                for(j=0; j<3; j++)
                {
                        sum=0;
                        for(k=0; k<3; k++)
                        {
                                sum = sum + arr1[i][k] * arr2[k][j];
                        }
                        arr3[i][j] = sum;
                }
        }
        cout<<"Multiplication of two Matrices : "<<endl;
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < m; ++j)
            {
                cout<<" "<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }

        return 0;
}
