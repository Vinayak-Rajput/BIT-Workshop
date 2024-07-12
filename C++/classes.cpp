#include<iostream>
using namespace std;
class MyClass
{
    public:
        int a,b;
        void initialize();
        void setValues(int x,int y)
        {
            a=x;
            b=y;
        }
        int add()
        {
            return a+b;
        }
};
void MyClass::initialize()
{
    a=0;
    b=0;

};
int main()
{
    MyClass obj,obj1;
    obj1.initialize();
    obj.setValues(10,20);
    cout<<"Sum is: "<<obj.add()<<endl;
    cout<<"Sum is: "<<obj1.add()<<endl;
    return 0;
}