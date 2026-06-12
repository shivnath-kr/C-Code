#include<iostream>
using namespace std;
int main()
{
    int a = 10, b = 50;
    int &x = a, &y = b;
    cout<<"value of a :"<<a;
    cout<<"\nvalue of b :"<<b;
    cout<<"\nvalue of reference x :"<<x;
    cout<<"\nvalue of reference y :"<<y;
    return 0;
}