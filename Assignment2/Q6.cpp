#include<iostream>
using namespace std;
int main()
{
    int n,i,j,f,m=0;
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
        int  c=0;
        for (j=0;j<n;j++)
        {
            if (a[i]==a[j])
            {
                c++;
            }
            if (c>m)
            {
                m=c;
                f=a[i];
            }
        }
    }
    cout <<"Most occuring element:"<<f<<endl;
    cout <<"Frequency:"<<m;
    return 0;
}