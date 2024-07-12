#include<iostream>
using namespace std;
int main()
{
    int a=20,c=20;
    int &b=a;
    cout<<"Initial values of a and b are: \n";
    cout<<a<<endl;
    cout<<b<<endl;
    b=30;
    cout<<"Values of a and b after changing b are: \n";
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<"Addresses of a, b and c are: \n";
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<&c<<endl;
    return 0;
}