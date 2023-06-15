//printing area and perimeter of triangle using member functions in classes
#include<iostream>
#include<cmath>
using namespace std;
class trianlge
{
    public:
    double a, b, c;

    double area()
    {
        return (sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c)));
    }
    double perimeter()
    {
        return (a+b+c);
    }
    void print_area_perimeter()
    {
        cout<<"Sides: "<<endl;
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
        cout<<"c= "<<c<<endl;
        cout<<endl;
        cout<<"Area= "<<area()<<endl;
        cout<<"Perimeter= "<<perimeter()<<endl;
    }
};
int main()
{
    double x, y, z;
    cout<<"Enter first side:"<<endl;
    cin>>x;
    cout<<"Enter second side:"<<endl;
    cin>>y;
    cout<<"Enter third side:"<<endl;
    cin>>z;
    cout<<endl;
    trianlge trian={x, y, z};
    trian.print_area_perimeter();
    return 0;
}