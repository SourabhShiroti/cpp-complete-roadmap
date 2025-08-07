#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the 1st number :";
    cin>>a;
    cout<<"Enter the 2nd number :";
    cin>>b;
    cout<<"Enter the 3rd number :";
    cin>>c;
    if(a<b && a<c){
        cout<<"Least number is :"<<a;
    }
    else if(b<a && b<c){
        cout<<"Least number is :"<<b;
    }
    else{
        cout<<"Least number is :"<<c;
    }
    return 0;
}