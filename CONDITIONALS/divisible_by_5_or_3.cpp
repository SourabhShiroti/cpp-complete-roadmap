#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n number :";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"one condtion is true";
    }
    else{
        cout<<"both condition are false";
    }
    return 0;
}