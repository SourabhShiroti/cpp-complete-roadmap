#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter give two numbers :";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swap number :"<<a<<" "<<b<<endl;
    return 0;
}