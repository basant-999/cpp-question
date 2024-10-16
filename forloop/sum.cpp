#include<iostream>
using namespace std;
int main(){
    int b;
    cin>>b;
    int sum=0;
    for(int i=1; i<=b; i++){
        if(i%2==0){
            sum = sum+i;
        }
      
    }
      cout<<sum<<"\n";

}