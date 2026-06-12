#include<iostream>
using namespace std;
int rectangle(int , int);
float circle(float);
int square(int);
int main()
{
    int l,b,a;
    float r;
    int x,y;
    float z;
    cout<<"enter the value of length and breadth\n";
    cin>>l>>b;
    x = rectangle(l,b);
    cout<<"area of rectangle = "<<x<<endl;
    cout<<"enter radius of circle\n";
    cin>>r;
    z = circle(r);
    cout<<"Area of circle = "<<z<<endl;
    cout<<"Enter the side of square\n";
    cin>>a;
    y= square(a);
    cout<<"area of square ="<<y<<endl;
    return 0;
}
int rectangle(int L,int B)
{
    return (L*B);
}
float circle(float R)
{
    return (3.14*R*R);
}
int square(int A)
{
    return (A*A);
}