
// write a program to fing the sum og the first n natural number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum= sum+i;
    }
    cout<<sum;
}