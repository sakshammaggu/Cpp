//finding modulus and angle of complex number using classes adn member functions in classes
#include<iostream>
#include<cmath>
using namespace std;
class complex 
{
    public:
    double re, im;
    double modulus()
    {
        return sqrt((pow(re, 2)+pow(im ,2)));
    }
    void print_modulus()
    {
        if (im>0)
        {
            cout<<"|"<<re<<"+"<<im<<"i|= "<<modulus()<<endl;
        }
        else
        {
            cout<<"|"<<re<<""<<im<<"i|= "<<modulus()<<endl;
        }
    }
    double angle()
    {
        return atan(im/re);
    
    }
    double euler_form_sin()
    {
        return sin(atan(im/re));
    }
    double euler_form_cos()
    {
        return cos(atan(im/re));
    }
    void print_euler_form()
    {
        if (euler_form_cos()>0)
        {
            cout<<"e^(i* "<<atan(im/re)<<") = "<<euler_form_sin()<<"+"<<euler_form_cos()<<"i"<<endl;
        }
        else
        {
            cout<<"e^(i* "<<atan(im/re)<<") = "<<euler_form_sin()<<""<<euler_form_cos()<<"i"<<endl;
        } 
    }
};
int main()
{
    double a, b;
    cout<<"Enter real part of complex no.: "<<endl;
    cin>>a;
    cout<<"Enter imaginary part of complex no.: "<<endl;
    cin>>b;
    cout<<endl;
    complex c={a, b};
    c.print_modulus();
    cout<<endl;
    cout<<"Angle made by complex no.: "<<c.angle()<<endl;
    cout<<endl;
    cout<<"Euler form: "<<endl;
    c.print_euler_form();
}