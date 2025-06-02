#include<iostream>
using namespace std;
int g = 8; // this is global variable

void sum(){
    int a;
    cout<<g<<"\n"; // global variable ko call karega
}
int main(){
    int g=10; // this is local variable
    g=50; // update the value of local variable named g
    cout<<g<<"\n"; // local variable ko call karega
    int a = 15, b = 27;
    float pie = 3.1415;
    char c = 'D';
    bool m = false;  
    sum();
    cout<<"Here the value of a is "<<a<<" & The value of b is "<<b;
    cout<<"\nThe value of pie is "<<pie;
    cout<<"\nThe value of character is "<<c<<"\n";
    cout<<m;
    return 0;
}