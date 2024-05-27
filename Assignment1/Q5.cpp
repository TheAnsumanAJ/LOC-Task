#include<iostream>
using namespace std;
int main()
{
    float d,r,p,a;
    cout <<"Enter radius of a circle"<<endl;
    cin >>r;
    d=r*2;
    p=2*3.14*r;
    a=3.14*(r*r);
    cout <<"Diameter of a circle is:"<<d<<endl;
    cout <<"Perimeter of a circle is:"<<p<<endl;
    cout <<"Area of a circle is:"<<a<<endl;
    return 0;
}