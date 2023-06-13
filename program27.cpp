//use of this pointer in classes
#include<iostream>
using namespace std;
class num
{
    public:
    int m1, m2;
    void func(int x, int y)
    {
        m1=x;
        this->m2=y;
        cout<<"Id = "<<this<<endl;
    }
};
int main()
{
    num address;
    int a, b;
    cout<<"Enter number a: "<<endl;
    cin>>a;
    cout<<"Enter number b: "<<endl;
    cin>>b;
    cout<<endl;
    address.func(a,b);
    cout<<"Address = "<<&address<<endl;
    cout<<"a = "<<address.m1<<", b = "<<address.m2<<endl;
    return 0;
}