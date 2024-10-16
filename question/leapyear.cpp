// write a program to find a leap year not
#include <iostream>
using namespace std;
int main(){
    int year = 2021;
    if(year%400==0 || year%4==0 || year%100==0){
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    }
}