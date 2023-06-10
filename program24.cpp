//inputting numbers and making it in form of complex no. using class
#include<iostream>
using namespace std;
class complex 
{
    public:
    double re, im;
};
int main()
{
    double a, b;
    cout<<"Enter real part of complex no.: "<<endl;
    cin>>a;
    cout<<"Enter imaginary part of complex no.: "<<endl;
    cin>>b;
    complex c={a, b};
    if (b>0)
    {
        cout<<"Imginary no. formed is:  "<<c.re<<" + "<<c.im<<"i"<<endl;
    }
    else
    {
         cout<<"Imginary no. formed is:  "<<c.re<<c.im<<"i"<<endl;
    }
}