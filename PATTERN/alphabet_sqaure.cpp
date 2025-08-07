#include<iostream>
using namespace std;
int main()
{
    char rows,col;
    cout<<"Enter the number of rows :";
    cin>>rows;
    cout<<"Enter the number of column :";
    cin>>col;
    for(char i='A'; i<=rows; i++){
        for(char j='A'; j<=col; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}