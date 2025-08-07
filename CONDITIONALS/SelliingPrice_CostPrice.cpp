#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"Enter the Cost Price Value :";
    cin>>cp;
    cout<<"Enter the selling price value :";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit :"<<sp-cp;
    }
    else if(cp>sp){
        cout<<"Loss :"<<cp-sp;
    }
    else{
        cout<<"No Profit - No Loss";
    }

    return 0;
}