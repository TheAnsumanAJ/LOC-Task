#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string:";
    cin >>s;
    int i,c=0,v=0,x=0;
    for (i=0;s[i];i++)
    {
        if (s[i]>='a' && s[i]<='z')
        {
            c++;
        }
        else if (s[i]>='0' && s[i]<='9')
        {
            v++;
        }
        else{
            x++;
        }
    }
    cout <<"Number of characters:"<<c<<endl;
    cout <<"Number of digits:"<<v<<endl;
    cout <<"Number of special character:"<<x<<endl;
    return 0;
}