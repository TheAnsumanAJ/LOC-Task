#include<iostream>
using namespace std;
int main()
{
    int n,i,j,m=0;
    cout <<"Enter size of array:";
    cin >>n;
    int a[n];
    cout <<"Enter elements of array:";
    for (i=0;i<n;i++)
    {
        cin >>a[i];
    }
    for (i=0;i<n;i++)
    {
        for (j=i;j<n;j++)
        {
            if (a[j]<0)
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
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