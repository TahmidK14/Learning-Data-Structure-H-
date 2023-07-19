//calculate bmi and store in an array
#include<iostream>
using namespace std;

struct data
{
    float mass;
    float height;
};
int main()
{
    data dt[4];
    float bmi[4];

    for(int i=0;i<4;i++)
    {
        cout<< "Mass of person "<<i+1<<" :";
        cin>>dt[i].mass;
        cout<<"Height of person "<<i+1<<" :";
        cin>>dt[i].height;
        cout<<endl;
    }
    for(int i=0;i<4;i++)
    {
        bmi[i]=dt[i].mass/(dt[i].height*dt[i].height);
    }

    for(int i=0;i<4;i++)
    {
        cout<<bmi[i]<<" ";
    }
}
