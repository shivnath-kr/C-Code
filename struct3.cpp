#include<iostream>
using namespace std;
struct student
{
    string name;
    int roll;
    float marks;
};
int main()
{
    student s[10];
    int i;
    for(i=0; i<3; i++)
    {
        if(i>0)
          cin.ignore();
        cout<<"INPUT STUDENT DETAILS : "<<i+1<<endl;
        cout<<"enter student name : "<<endl;
        //cin.ignore(); //removes leftover newline character from input buffer
        getline(cin,s[i].name);
        cout<<"enter student roll no : \n";
        cin>>s[i].roll;
        cout<<"enter student marks : \n";
        cin>>s[i].marks;
    }
    cout<<"\n\n\n";
    for(i=0; i<3; i++)
    {
        cout<<"YOUR STUDENT DETAILS : "<<i+1<<endl;
        cout<<"student name : "<<s[i].name<<endl;
        cout<<"student roll no : "<<s[i].roll<<endl;
        cout<<"student marks : "<<s[i].marks<<endl;
        cout<<endl;
    }
    return 0;

}