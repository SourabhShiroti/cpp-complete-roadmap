#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    cout<<"Bitwise AND :"<<(a&b)<<endl;
    cout<<"Bitwise OR :"<<(a|b)<<endl;
    cout<<"Bitwise Ones Complement :"<<(~a)<<endl;
    cout<<"Bitwise Exclusive OR :"<<(a^b)<<endl;
    cout<<"Bitwise Left shift :"<<(a<<b)<<endl;
    cout<<"Bitwise Right shift :"<<(a>>b)<<endl;
    return 0;
}