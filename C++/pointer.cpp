#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int *p,*q;
    p = &a;
    q = p;
    cout<<"Value of  p: "<<p<<endl; // Reference: Output the memory address with the p
    cout<<"Value of *p: "<<*p<<endl; // Dereference: Output the value of the memory address with the p
    cout<<"Value of  q: "<<q<<endl; // Reference: Output the memory address with the q
    cout<<"Value of *q: "<<*q<<endl; // Dereference: Output the value of the memory address with the q
    return 0;
}