#include<iostream>
using namespace std;
void swapvalue(int &,int &);
void swapvalue(char &,char &);
int main()
{
    int a,b;
    char x,y;
    cout<<"enter two number to swap\n";
    cin>>a>>b;
    cout<<"enter two character to swap\n";
    cin>>x>>y;
    cout<<"Before function calling\n";
    cout<<"Value of a :"<<a;
    cout<<"\nValue of b :"<<b;
    cout<<"\nFirst character :"<<x;
    cout<<"\nSecond character :"<<y;
    cout<<"\nValue after function call";
    swapvalue(a,b);
    swapvalue(x,y);
    return 0;
}
void swapvalue(int &num1,int &num2)
{
    int result = num1;
    num1 = num2;
    num2 = result;
    cout<<"\nvalue of a :"<<num1;
    cout<<"\nvalue of b :"<<num2;
}
void swapvalue(char &ch,char &c)
{
    char t = ch;
    ch = c;
    c = t;
    cout<<"\nFirst character :"<<ch;
    cout<<"\nSecond character :"<<c;
}