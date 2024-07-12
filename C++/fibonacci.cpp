#include<iostream>
using namespace std;
int fibonacci(int);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Fibonacci series is: ";
    for(int i=0;i<n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    return 0;
}
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}