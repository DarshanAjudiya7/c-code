#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the value of num1:\n"; //<< is called Insertion operator
    cin>>num1; //>> is called Extraction operator

    cout<<"Enter the value of num2:\n"; 
    cin>>num2; 

    int sum = num1 + num2;
    cout<<"Sum of two number is:\n"<<sum; 

    return 0;
}