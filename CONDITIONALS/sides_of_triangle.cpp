#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the 1st side value :";
    cin>>a;
    cout<<"Enter the 2nd side value :";
    cin>>b;
    cout<<"Enter the 3rd side value :";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Valid triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
    return 0;
}