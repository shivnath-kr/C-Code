//wap of overload function to print : an integer , a character, a float value
#include<iostream>
using namespace std;
void display(int);
void display(char);
void display(float);
int main()
{
    display(32);
    display('A');
    display(3.14f);
    return 0;
}
void display(int a)
{
    cout<<"integer value :"<<a;
}
void display(char ch)
{
    cout<<"\ncharacter value :"<<ch;
}
void display(float p)
{
    cout <<"\nfloat value :"<<p;
}