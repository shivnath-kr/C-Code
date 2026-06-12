//program to modify value of x using refrence
#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int &ref = x; //reference variable
    cout<<"value before modification\n";
    cout<<"value of x :"<<x<<endl;
    cout<<"value of reference :"<<ref;
    cout<<"value after modification using refrence\n";
    // modify value using refrence
    ref = 50;
    cout<<"\nvalue of x :"<<x;
    cout<<"\nvalue of reference :"<<ref;
    return 0;
}