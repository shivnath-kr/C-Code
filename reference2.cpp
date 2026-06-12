#include<iostream>
using namespace std;
int main()
{
    int x;
    int &ref = x;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    cout<<"value of x :"<<x<<endl;
    cout<<"value of reference variable ref :"<<ref<<endl;
    cout<<"address of x :"<<&x;
    cout<<"\naddress of reference variable ref :"<<&ref;
    return 0;
}