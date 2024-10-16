#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter number";
    cin>>n1>>n2>>n3;
    if(n1>n2){
        if(n1>n3){
            cout<<"max is"<<n1;
        }else{
            cout<<"max is "<<n3;
        }
    }else{
        if(n2>n3){
            cout<<"max is"<<n2;

        }
        else{
            cout<<"max  is "<<n3;
        }
    }
}