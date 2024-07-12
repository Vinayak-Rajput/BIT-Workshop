#include<iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    student s;
    cout<<"Enter information,\n";
    cout<<"Enter name: ";
    cin.getline(s.name,50);
    cout<<"Enter roll number: ";
    cin>>s.roll;
    cout<<"Enter marks: ";
    cin>>s.marks;
    cout<<"\nDisplaying Information,\n";
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll: "<<s.roll<<endl;
    cout<<"Marks: "<<s.marks<<endl;
    return 0;
}