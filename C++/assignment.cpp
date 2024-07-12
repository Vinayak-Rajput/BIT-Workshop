#include<iostream>
using namespace std;
int main()
{
    int a=10, b=20;
    a+=b;
    cout<<"a+=b: "<<a<<endl;
    a-=b;
    cout<<"a-=b: "<<a<<endl;
    a*=b;
    cout<<"a*=b: "<<a<<endl;
    a/=b;
    cout<<"a/=b: "<<a<<endl;
    a%=b;
    cout<<"a%=b: "<<a<<endl;
    a=10;
    a<<=2;
    cout<<"a<<=2: "<<a<<endl;
    a>>=2;
    cout<<"a>>=2: "<<a<<endl;
    a&=b;
    cout<<"a&=b: "<<a<<endl;
    a|=b;
    cout<<"a|=b: "<<a<<endl;
    a^=b;
    cout<<"a^=b: "<<a<<endl;
    return 0;
}