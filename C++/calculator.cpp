#include<iostream>
using namespace std;
int main()
{
    int a, b, choice;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Choices:"<<endl;
    cout<<"\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n6.Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1: cout<<"Sum: "<<a+b;
        break;
    case 2: cout<<"Difference: "<<a-b;
        break;  
    case 3: cout<<"Product: "<<a*b;
        break;
    case 4: cout<<"Quotient: "<<a/b;
        break;
    case 5: cout<<"Remainder: "<<a%b;
        break;
    case 6: return 0;
    default:
        cout<<"Invalid choice!";
        break;
    }
    return 0;
}