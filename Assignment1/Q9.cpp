#include<iostream>
using namespace std;
int main()
{
    float a,b,c,s;
    cout <<"Enter angles of a triangle:"<<endl;
    cin >>a>>b>>c;
    s=a+b+c;
    if(s==180)
    {
        cout<<"Triangle is valid.";
    }
    else
    {
        cout<<"Not Valid";
    }
    return 0;
}
