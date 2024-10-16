// write a program to find the length of string with out the strlen()?
#include<iostream>
using namespace std;
int main (){
    string str = "basant";
    int length=0;
    for(int i=0; str[i] !=0; i++){
        length++;
    }
    cout<<length;
}