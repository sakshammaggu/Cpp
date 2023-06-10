//swapping two numbers using call by reference in c++
#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a, b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    cout<<"a= "<<a<<", b= "<<b<<endl;
    swap(a, b);
    cout<<"a= "<<a<<", b= "<<b<<endl;
    return 0;
}