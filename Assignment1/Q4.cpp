#include<iostream>
using namespace std;
int main()
{
    int a,b,x;
    cout << "Enter 2numbers:"<<endl;
    cin >>a>>b;
    char s;
    cout <<"Enter a operator"<<endl;
    cin >>s;
    switch (s){
        case '+':
            x=a+b;
            break;
        case '-':
            x=a-b;
            break;
        case '*':
            x=a*b;
            break;
        case '/':
            x=a/b;
            break;
        default :
            "Invalid Operator";         
    }
    cout <<x;
    return 0;
}
