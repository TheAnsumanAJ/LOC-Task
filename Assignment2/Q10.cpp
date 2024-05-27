#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout <<"Enter three sides of a triangle";
    cin >>a>>b>>c;
    if (a==b==c)
    {
        cout<<"Equilateral Triangle.";
    }
    else if (a==b || b==c || a==c)
    {
        cout<< "Isoscles Triangle";
    }
    else if (a!=b && b!=c)
    {
        cout <<"Scalene Triangle";
    }
    else{
        "invalid";
    }
    return 0;
}