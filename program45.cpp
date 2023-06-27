//C++ Program to Access Protected Data Member using Inheritance
#include<iostream>
using namespace std;
class myclass
{
    protected:
    int new_num;
};
class my_newclass: public myclass
{
    public:
    void set_new_num(int new_num)
    {
        this->new_num=new_num;
    }
    void func()
    {
        cout<<"new number is: "<<new_num;
    }
};
int main()
{
    int x;
    cout<<"enter number: "<<endl;
    cin>>x;
    my_newclass obj1;
    obj1.set_new_num(x);
    obj1.func();
}