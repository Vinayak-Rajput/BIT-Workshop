#include<iostream>
using namespace std;
int main()
{
    char C = 65, c = 97, n = 48, s = 32;
    cout<<"Capital Alphabets: \n";
    for(int i=0; i<26; i++, C++)
        cout<<C<<" ";
    cout<<"\nSmall Alphabets: \n";
    for(int i=0; i<26; i++, c++)
        cout<<c<<" ";
    cout<<"\nNumbers: \n";
    for(int i=0; i<10; i++, n++)
        cout<<n<<" ";
    cout<<"\nSpecial Characters: \n";
    for(int i=0; i<32; i++, s++)
        cout<<s<<" ";
    return 0;
}