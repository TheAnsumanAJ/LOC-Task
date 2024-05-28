#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x;
    cout<<"Enter size of array:";
    cin >>n;
    int a[n];
    cout <<"Enter elements of array:";
    for (i=0;i<n;i++)
    {
        cin >>a[i];
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    cout <<"Sorted array:";
    for (i=0;i<n;i++)
    {
        cout <<a[i]<<endl;
    }
    return 0;
}