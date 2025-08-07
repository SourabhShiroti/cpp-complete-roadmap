#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n number :";
    cin>>n;
    if(n%2==0){
        cout<<"Even Number"<<endl;
    }
    else if(n%3==0){
        cout<<"Odd Number"<<endl;
    }
    else{
        cout<<"Invalid number";
    }
    return 0;
}