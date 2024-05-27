#include<iostream>
using namespace std;
int main()
{
    int i,s=0,p=0,a=0;
    cout<<"Enter marks of the subjects:"<<endl;
    int r[5];
    for (i=0;i<5;i++)
    {
        cin>>r[i];
    }
    for(i=0;i<5;i++)
    {
        s=s+r[i];
    }
    a=s/5;
    p=(a*0.01)*100;
    cout <<"Total marks:"<<s<<endl;
    cout <<"Average Marks:"<<a<<endl;
    cout<<"Percentage:"<<p<<endl;
    return 0;
}