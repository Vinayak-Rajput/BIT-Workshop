#include<iostream>
using namespace std;
class A
{
    public:
        int a;
        void setA(int x)
        {
            a=x;
        }
};
class B:public A
{
    public:
        int b;
        void setB(int x)
        {
            b=x;
        }
};
class C:public B
{
    public:
        int c;
        void setC(int x)
        {
            c=x;
        }
        void display()
        {
            cout<<"A: "<<a<<endl;
            cout<<"B: "<<b<<endl;
            cout<<"C: "<<c<<endl;
        }
};
int main()
{
    C obj;
    obj.setA(10);
    obj.setB(20);
    obj.setC(30);
    obj.display();
    return 0;
}
// Output:
// A: 10
// B: 20
// C: 30