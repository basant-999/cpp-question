
// program to find greatest among three numbers suing
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a number";
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<a;
    }
    else if(b>=a && b>=c){
        cout<<b;
    }
    else{
        cout<<c;
    }
}