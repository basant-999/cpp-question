#include<iostream>
using namespace std;
int main(){
//    write a program to display the suqare of valid number?
int n, i=1, c=0;
bool f=false;
cout<<"enter a no.";
cin>>n;
do{
    if(i*i==n){
        f=true;
        break;
    }
    c++;
    i++;
}while(i<=n/2);
if(f==true){
    cout<<"vcalid square";
}
else{
    cout<<"invalid";
}
}