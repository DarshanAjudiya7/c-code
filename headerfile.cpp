


//There are two types of header files:

//1. System header files : It comes with hte compiler
#include<iostream>

//2. Usere defined header files: It is written by the programmer
#include "ds.h" 
// NOTE: This will produce the error if ds.h is not present in the current directory
using namespace std;
int main(){
    int a = 123,b = 45;
    cout<<"Operators in C++ : "<<endl;
    cout<<"Following are the typees of oparators in C++..."<<endl;
    cout<<endl;

    // 1. Arithmetic oparators
    cout<<"Following are the arithmatic oparators in C++:"<<endl;
    cout<<"The value of a + b is : "<<a+b<<endl;
    cout<<"The value of a - b is : "<<a-b<<endl;
    cout<<"The value of a * b is : "<<a*b<<endl;
    cout<<"The value of a / b is : "<<a/b<<endl;
    cout<<"The value of a % b is : "<<a%b<<endl;
    cout<<"The value of a++ is : "<<a++<<endl;
    cout<<"The value of a-- is : "<<a--<<endl;
    cout<<"The value of ++a is : "<<++a<<endl;
    cout<<"The value of --a is : "<<--a<<endl;
    cout<<endl;

    // 2. Assignment Operators --> used to assign values to variables
    int m = 56;  
    int n = 77;
    float j = 45.76;
    char ch = 'K';

    // 3. Comparison Oparators
    cout<<"Following are the comparison oparators in C++:"<<endl;
    cout<<"The value of m==n is "<<(m==n)<<endl;
    cout<<"The value of m!=n is "<<(m!=n)<<endl;
    cout<<"The value of m<n is "<<(m<n)<<endl;
    cout<<"The value of m>n is "<<(m>n)<<endl;
    cout<<"The value of m<=n is "<<(m<=n)<<endl;
    cout<<"The value of m>=n is "<<(m>=n)<<endl;

    // 4. Logical Oparators
    cout<<"Following are the logical oparators in C++:"<<endl;
    cout<<"The value of this logical and operator is : "<<((m==n) && (m<n))<<endl;
    cout<<"The value of this logical or operator is : "<<((m==n) || (m<n))<<endl;
    cout<<"The value of this logical not operator is : "<<(!(m==n))<<endl;
    return 0;
} 