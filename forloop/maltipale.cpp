#include<iostream>
using namespace std;
int main(){
    for( int i=4;;i+=4){
        if(i%9==0){
            cout<<i;
            break;

        }
    }
    
}