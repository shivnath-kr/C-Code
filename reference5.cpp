//program to increment using refrence function
#include<iostream>
using namespace std;
void increment(int &x);
int main()
{
    int num =0;
    cout<<"value before function calling :"<<num;
    increment(num); 
    return 0;
}
void increment(int &x)
{
    cout<<"\nenter value to increment\n";
    cin>>x;\
    cout<<"original value :"<<x;
    x++;
    cout<<"\nvalue after increment : "<<x;
}