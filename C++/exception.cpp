#include<iostream>
using namespace std;
int main()
{
    int num=10, den=0;
    try
    {
        if(den==0)
            throw "Division by zero";
        cout<<"Division: "<<num/den<<endl;
    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}