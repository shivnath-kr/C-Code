#include<iostream>
using namespace std;
struct book
{
    string bookname;
    float price;
    int page;
}b;
int main()
{
    cout <<"enter book name\n";
    cin>>b.bookname;
    cout<<"enter book price\n";
    cin>>b.price;
    cout <<"enter book pages\n";
    cin>>b.page;
    cout<<"\n\n\t\tBOOK DETAILS\n";
    cout<<"book price :"<<b.price<<endl;
    cout<<"book name :"<<b.bookname<<endl;
    cout<<"book pages :"<<b.page<<endl;
    return 0;
}
