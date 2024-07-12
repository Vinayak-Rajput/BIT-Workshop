#include<iostream>
using namespace std;
int main()
{
    const int c=100; //c is unchangable
    int a=10, b=20;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"a+b: "<<a+b<<endl;
    cout<<"a-b: "<<a-b<<endl;
    cout<<"a*b: "<<a*b<<endl;
    cout<<"a/b: "<<a/b<<endl;
    cout<<"a/b: "<<(float)a/b<<endl; 
    cout<<"a%b: "<<a%b<<endl;
    cout<<"a++: "<<a++<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"++a: "<<++a<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"a--: "<<a--<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"--a: "<<--a<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"c: "<<c<<endl;

    return 0;
}