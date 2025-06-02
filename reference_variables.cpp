#include<iostream>
using namespace std;
int c = 24;
int main(){
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    c=a+b;
    cout<<c<<endl; // for local variable
    cout<<::c<<endl; //"::" for global variable
    return 0;
}