//program to find larger number among two number using reference variable
#include<iostream>
using namespace std;
void large(int &,int &);
int main()
{
    int x,y;
    cout<<"Enter two number\n";
    cin>>x>>y;
    large(x,y);
    return 0;
}
void large(int &a,int &b)
{
    int max;
    if(a == b)
       cout<<"Both numbers are equal";
    else if(a > b)
       cout<<"larger value :"<<a;
    else
       cout<<"larger value :"<<b;
}