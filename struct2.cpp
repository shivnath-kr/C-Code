#include<iostream>
using namespace std;
struct employee
{
    int empid;
    string empname;
    float salary;
}e[10];
int main()
{
    for(int i=0; i<3; i++)
    {
    cout<<"Enter employee details : "<<i+1<<endl;
    cout<<"Enter employee id\n";
    cin>>e[i].empid;
    fflush(stdin);
    cout<<"Enter employee name\n";
    getline(cin,e[i].empname);
    cout<<"Enter employee salary\n";
    cin>>e[i].salary;
    }
    for(int i=0; i<3; i++)
    {
    cout<<"\n\t\tEPLOYEE DETAILS : "<<i+1<<endl;
    cout<<"employee name :"<<e[i].empname;
    cout<<"\nemployee id :"<<e[i].empid;
    cout<<"\nemployee salary :"<<e[i].salary;
    }
    return 0;
}