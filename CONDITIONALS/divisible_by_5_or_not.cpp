#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n number :";
    cin>>n;
    if(n%5==0){
        cout<<"Divisible by 5"<<endl;
    }
    else{
        cout<<"Not divisible by 5";
    }
    return 0;
}