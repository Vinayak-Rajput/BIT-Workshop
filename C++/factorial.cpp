#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    int n,fac;
    cout<<"Enter a number: ";
    cin>>n;
    fac=factorial(n);
    cout<<"Factorial of "<<n<<" is: "<<fac<<endl;
    return 0;
}
int factorial(int n)
{
    if(n<0)
    {
        cout<<"Factorial of negative number is not possible"<<endl;
        return 0;
    }
    else if(n>0)
    {
        return n*factorial(n-1);
    }
    else
        return 1;
}