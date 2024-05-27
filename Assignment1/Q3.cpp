#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cout <<"Enter a number"<<endl;
    cin >> n;
    do{
        r=n%10;
        s=s+r;
        n=n/10;
    }while(n>0);
    cout <<"Sum of digits is: "<<s;
    return 0;
}
