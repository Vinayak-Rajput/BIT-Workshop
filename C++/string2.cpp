#include<iostream>
using namespace std;
int main()
{
    string firstname="John", lastname="Doe";
    cout<<"firstname: "<<firstname<<endl;
    cout<<"lastname: "<<lastname<<endl;
    
    cout<<"fullname: "<<firstname.append(lastname)<<endl; //using append() function
    
    cout<<"Length of firstname: "<<firstname.length()<<endl; //using length() function
    
    cout<<"Length of lastname: "<<lastname.size()<<endl; //using size() function
    cout<<"Length of fullname: "<<firstname.size()+lastname.length()<<endl; //using size() function
    
    cout<<"firstname in order: ";
    for(int i=0; i<firstname.length(); i++) //using length() function to iterate through the string
    {
        cout<<firstname[i]<<" ";
    }
    cout<<endl;
    
    //in reverse order
    cout<<"firstname in reverse order: ";
    for(int i=firstname.length()-1; i>=0; i--) //using length() function to iterate through the string
    {
        cout<<firstname[i]<<" ";
    }   

    //strings are mutable in C++
    firstname[0]='M';
    cout<<endl<<"firstname after changing: "<<firstname<<endl;
    
    //using at() function
    cout<<"firstname using at(): ";
    for(int i=0; i<firstname.length(); i++) //using length() function to iterate through the string
    {
        cout<<firstname.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}