#include<iostream>
#include<utility>
using namespace std;
class MyClass
{
    private:
        int a,b;
    public:
        void initialize();
        void setValues(int x,int y)
        {
            a=x;
            b=y;
        }
        pair<int,int> getvs()
        {
            return make_pair(a,b);
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
    pair<int,int> x;
    MyClass obj,obj1;
    obj1.initialize();
    obj.setValues(10,20);
    x=obj.getvs();
    int a=x.first,b=x.second;
    cout<<"Values are: "<<a<<" "<<b<<endl;
    cout<<"Sum is: "<<obj.add()<<endl;
    cout<<"Sum is: "<<obj1.add()<<endl;
    return 0;
}
