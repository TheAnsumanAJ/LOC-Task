#include<iostream>
using namespace std;
int main()
{
    int i,x,y,k=0,j=0;
    cout <<"Enter size of first array:";
    cin >>x;
    int a[x];
    cout <<"Enter size of second array:";
    cin >>y;
    int b[y];
    cout <<"Enter Elements of First array:";
    for (i=0;i<x;i++)
    {
        cin >>a[i];
    }
    cout<<"Enter elements of second array:";
    for(i=0;i<y;i++)
    {
        cin >>b[i];
    }
    k=x+y;
    int c[k];
    while (j<k)
    {
        for (i=0;i<x;i++)
        {
            c[j]=a[i];
            j++;
        }
        for (i=0;i<y;i++)
        {
            c[j]=b[i];
            j++;
        }
    }
    cout <<"Reverse array:";
    for(i=k-1;i>=0;i--)
    {
        cout <<c[i]<<endl;
    }
    return 0;
}