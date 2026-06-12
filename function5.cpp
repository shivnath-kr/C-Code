//write a overload function  for finding the volume of 
//1.cube,2.cylinder,3.rectangle
#include<iostream>
using namespace std;
int volume(int side)
{
    return side*side*side;
}
float volume(float r,float h)
{
    return (3.14*r*r*h);
}
int volume(int l,int b,int h1)
{
    return (l*b*h1);
}
int main()
{
    int a;
    cout<<"Enter the side of square\n";
    cin>>a;
    cout<<"volume of square :"<<volume(a);
    float radius,height;
    cout<<"\nEnter the radius and height of cylinder\n";
    cin>>radius>>height;
    cout<<"volume of a cylinder :"<<volume(radius,height);
    int length,breadth,height1;
    cout<<"\nEnter height, Length, and height of rectangular box";
    cin>>length>>breadth>>height1;
    cout<<"\nvolume of rectangular box :"<<volume(length,breadth,height1);
    return 0;
}