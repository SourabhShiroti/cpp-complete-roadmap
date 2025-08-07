#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    cout<<"Enter the Alphabet triangle character :";
    cin>>ch;
    for(char i='A'; i<=ch; i++){
        for(char j='A'; j<=i; j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }
    return 0;
}