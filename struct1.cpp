#include<iostream>
using namespace std;
struct employee
{
    int empid;
    string empname;
    float salary;
}e;
int main()
{
    cout<<"Enter employee id\n";
    cin>>e.empid;
    cout<<"Enter employee name\n";
    cin>>e.empname;
    cout<<"Enter employee salary\n";
    cin>>e.salary;
    cout<<"\n\t\tEMPLOYEE DETAILS\n";
    cout<<"employee name :"<<e.empname;
    cout<<"\nemployee id :"<<e.empid;
    cout<<"\nemployee salary :"<<e.salary;
    return 0;
}