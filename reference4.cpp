#include<iostream>
using namespace std;

void swap(int &, int &);

int main()
{
    int a,b;

    cout<<"Enter two numbers to swap\n";
    cin>>a>>b;

    cout<<"Before swap : "<<a<<" "<<b<<endl;

    swap(a,b);

    cout<<"After swap : "<<a<<" "<<b;

    return 0;
}

void swap(int &x, int &y)
{
    int z;

    z = x;
    x = y;
    y = z;
}