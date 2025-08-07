#include<iostream>
using namespace std;
int main()
{
    float p,r,t;
    cout<<"Enter the principle value :";
    cin>>p;
    cout<<"Enter the rate :";
    cin>>r;
    cout<<"Enter the time :";
    cin>>t;
    cout<<"Simple Interest :"<<(p*r*t)/100;
    return 0;
}