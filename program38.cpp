/*
Write a program to print the area of two rectangles having sides (a,b) and (c,d) respectively by creating a
class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are
passed as parameters to its constructor.
*/
#include<iostream>
using namespace std;
class rectangle
{
    private:
    double l1, b1, l2, b2;

    public:
    rectangle(double length1, double breadth1, double length2, double breadth2):
    l1(length1), b1(breadth1), l2(length2), b2(breadth2){}

    double area_rectangle_1()
    {
        return l1*b1;
    }
    double area_rectangle_2()
    {
        return l2*b2;
    }
    void print_area()
    {
        cout<<"***RECTANGLE 1***"<<endl;
        cout<<"___________________"<<endl;
        cout<<"Length = "<<l1<<endl;
        cout<<"Breadth = "<<b1<<endl;
        cout<<"Area of rectangle 1 = "<<area_rectangle_1()<<endl;
        cout<<endl;
        cout<<"***RECTANGLE 2***"<<endl;
        cout<<"___________________"<<endl;
        cout<<"Length = "<<l2<<endl;
        cout<<"Breadth = "<<b2<<endl;
        cout<<"Area of rectangle 2 = "<<area_rectangle_2()<<endl;
    }
};
int main()
{
    double l_1, b_1, l_2, b_2;
    cout<<"Enter length of 1st rectangle: "<<endl;
    cin>>l_1;
    cout<<"Enter breadth of 1st rectangle: "<<endl;
    cin>>b_1;
    cout<<endl;
    cout<<"Enter length of 2nd rectangle: "<<endl;
    cin>>l_2;
    cout<<"Enter breadth of 2nd rectangle: "<<endl;
    cin>>b_2;
    cout<<endl;
    rectangle rect(l_1, b_1, l_2, b_2);
    rect.print_area();
}