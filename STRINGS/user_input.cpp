#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the Alphabet words :";
    //cin>>str;            //spaces are not allowed
    getline(cin,str);   //spaces are also allowed
    cout<<str;
    return 0;
}