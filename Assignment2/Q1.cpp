#include<iostream>
using namespace std;
int main()
{
    int i,x,n,c=0;
    cout <<"Enter size of array:";
    cin >>x;
    int a[x];
    cout <<"Enter elements of array:";
    for (i=0;i<x;i++)
    { 
        cin >>a[i];

    }
    cout <<"Enter the number to be searched:";
    cin >>n;
    for (i=0;i<x;i++)
    {
        if (n==a[i])
        {
            c++;
        }
    }
    cout <<"Occurence of the number:"<<c;
    return 0;
}