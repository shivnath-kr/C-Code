#include<iostream>
using namespace std;
int calculate(int a,int b,int c)
{
    return (a+b+c);
}
int calculate(int x,int y)
{
    return (x-y);
}
float calculate(float num1,float num2)
{
    return (num1 * num2);
}
int main()
{
    int a,b,c;
    cout<<"Enter three number to add\n";
    cin>>a>>b>>c;
    cout<<"addition result :"<<calculate(a,b,c);
    int x,y;
    cout<<"\nenter two number to substract\n";
    cin>>x>>y;
    cout<<"substraction result :"<<calculate(x,y);
    float num1,num2;
    cout<<"\nenter two number to multiply\n";
    cin>>num1>>num2;
    cout<<"Multiply result :"<<calculate(num1,num2);
    return 0;
}