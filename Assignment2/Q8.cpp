#include<iostream>
using namespace std;
int main(){
    string s;
    cout <<"Enter a string:";
    cin >>s;
    int i,v=0,c=0;
    for (i=0;s[i];i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u')
        { 
            v++;
        }
        else{
            c++;
        }
    }
    cout <<"Number of vowels:"<<v<<endl;
    cout <<"Number of consonants:"<<c;
    return 0;
}