#include<iostream>
using namespace std;
int main()
{
    int  i,j,x,n=1;
    cout <<"Enter number of rows:";
    cin >>x;
    for (i=0;i<x;i++)
    {
        for (j=0;j<=i;j++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    return 0;
}