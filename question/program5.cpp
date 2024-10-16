
// write a program to check whether a  character is a vowel or consonat?
#include<iostream>
using namespace std;
int main(){
    char  ch;
    cout<<"enter  character"<<"\n";
    cin>>ch;
    if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'|| ch=='u'){
        cout<<"vowel";
    }
    else{
        cout<<"consonent";
    }
}