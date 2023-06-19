/*
Write a program to print the area and perimeter of a triangle having sides of a, b and c units by
creating a class named 'Triangle' with the constructor having the three sides as its parameters
*/
#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
    private:
    double a, b, c;

    public:
    triangle(double side1, double side2, double side3): a(side1), b(side2), c(side3){}

    double area()
    {
        return (sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c)));
    }
    void print_area()
    {
        cout<<"Side 1= "<<a<<endl;
        cout<<"Side 2= "<<b<<endl;
        cout<<"Side 3= "<<c<<endl;
        cout<<"Area= "<<area();
    }
};
int main()
{
    double x, y, z;
    cout<<"Enter first side: "<<endl;
    cin>>x;
    cout<<"Enter second side: "<<endl;
    cin>>y;
    cout<<"Enter third side: "<<endl;
    cin>>z;
    cout<<endl;
    triangle trian(x, y, z);
    trian.print_area();
}