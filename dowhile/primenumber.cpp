#include <iostream>
using namespace std;
int main(){
    int n, k=1, c=0;
    bool f = false;
    cout <<"enter number"<<"\n";
    cin>>n;
    do{
        if(n%2==0){
            f=true;
            break;
        }
        k--;
    }while(k>1);
    if(f==true){
        cout<<"not prime"<<"\n";
    }else{
        cout<<"prime";
    }
}