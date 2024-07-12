#include<iostream>
using namespace std;
int main()
{
    char str[]="Hello, World!";
    cout<<"str: "<<str<<endl;
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i]<<" ";
    }   
    return 0;
}