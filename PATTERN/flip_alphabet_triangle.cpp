#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    cout<<"Enter the flip aplhabet character :";
    cin>>ch;
    for(char i='A'; i<=ch; i++){
        for(char j='A'; j<=ch-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    } 
    return 0;
}