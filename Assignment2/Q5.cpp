#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout <<"Enter size of array:";
    cin >>n;
    int a[n],b[n];
    cout <<"Enter elements of array:";
    for (i=0;i<n;i++)
    {
        cin >>a[i];
    }
    for (i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    cout <<"Copied array:";
    for (i=0;i<n;i++)
    {
        cout <<b[i]<<endl;
    }
    return 0;
}