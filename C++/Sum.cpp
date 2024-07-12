#include<iostream>
using namespace std;
int sumation(int k)
{
    if(k>0)
    {
        return k+sumation(k-1);
    }
    else
        return 0;
}
int main()
{
    int sum,k;
    cout<<"Enter a number: ";
    cin>>k;
    sum = sumation(k);
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}