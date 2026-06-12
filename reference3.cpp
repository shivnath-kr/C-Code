//wap to store in variable and access using reference variable
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x;
    int &ref = x; //reference variable
    cout<<"enter the value of x\n";
    cin>>x;
    cout<<"value using reference variable :"<<ref;
    cout<<"\nsquare using reference variable :"<<(float)pow(ref,2);
    return 0;
}