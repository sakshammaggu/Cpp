/*
Write a program to print the area of a rectangle by creating a class named 'Area' having two functions.
First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the
second function named as 'getArea' returns the area of the rectangle. Length and breadth of the
rectangle are entered through keyboard.
*/
#include<iostream>
using namespace std;
class area
{
    public:
    double length, breadth;

    void set_dim(double length, double breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }
    double get_area()
    {
        return (length*breadth);
    }
    void print_area()
    {
        cout<<"Length of rectangle: "<<length<<endl;
        cout<<"Breadth of rectangle: "<<breadth<<endl;
        cout<<"Area: "<<get_area()<<endl;
    }
};
int main()
{
    double l, b;
    cout<<"Enter length: "<<endl;
    cin>>l;
    cout<<"Enter breadth: "<<endl;
    cin>>b;
    cout<<endl;
    area values;
    values.set_dim(l, b);
    values.print_area();
    return 0;
}