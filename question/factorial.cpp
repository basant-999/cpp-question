// write a program to find the factoreial of a number using loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact =1;
    while(n>1){
        fact = fact*n;
        n--;
    }
    cout<<fact;
}