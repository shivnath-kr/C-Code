//overload function to find maximum number between
//two integer, two float no., three integers
#include<iostream>
using namespace std;
void maximum(int,int);
void maximum(float,float);
void maximum(int,int,int);
int main()
{
    int a,b;
    cout<<"enter two no \n";
    cin>>a>>b;
    maximum(a,b);
    float x,y;
    cout<<"\nEnter two flaoting number\n";
    cin>>x>>y;
    maximum(x,y);
    int num1,num2,num3;
    cout<<"\nEnter three values to find greater\n";
    cin>>num1>>num2>>num3;
    maximum(num1,num2,num3);
    return 0;
}
void maximum(int a,int b)
{
    if(a == b)
       cout<<"\nBoth value are equal";
    else if(a > b)
       cout<<"\nMaximum number :"<<a;
    else 
       cout<<"\nMaximum number :"<<b;
}
void maximum(float x,float y)
{
    if(x == y)
      cout<<"\nBoth float value are equal";
    else if(x > y)
      cout<<"\nMaximum float value :"<<x;
    else
      cout<<"\nMaximum float value :"<<y;    
}
void maximum(int p,int q,int r)
{
    if(p > q)
    {
        if(p >r)
           cout<<"\nmaximum number :"<<p;
        else
           cout<<"\nmaximum number :"<<r;
    }
    else if(p==q && q==r)
      cout<<"\nall value are same";
    else 
    {
        if(q > r)
          cout<<"\nmaximum number :"<<q;
        else
          cout<<"\nmaximum numbe :"<<r;
    }
}