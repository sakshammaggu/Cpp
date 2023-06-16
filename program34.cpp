#include<iostream>
using namespace std;
class complex 
{
    public:
    double re1, im1, re2, im2;

    double print_sum_real()
    {
        return re1+re2;
    }
    double print_sum_imag()
    {
        return im1+im2;
    }
    void print_sum()
    {
        cout<<"Sum of two complexes = ("<<re1<<"+"<<im1<<"i) + ("<<re2<<"+"<<im2<<"i) = "<<print_sum_real()<<"+"<<print_sum_imag()<<"i"<<endl;
    }

    double print_diff_real()
    {
        return re1-re2;
    }
    double print_diff_imag()
    {
        return im1-im2;
    }
    void print_diff()
    {
        cout<<"Sum of two complexes = ("<<re1<<"+"<<im1<<"i) - ("<<re2<<"+"<<im2<<"i) = "<<print_diff_real()<<"+"<<print_diff_imag()<<"i"<<endl;
    }

    double print_mul_1()
    {
        return (re1*re2)-(im1*im2);
    }
    double print_mul_2()
    {
        return (re1*im2)+(im1*re2);
    }
    void print_mul()
    {
        cout<<"Sum of two complexes = ("<<re1<<"+"<<im1<<"i) * ("<<re2<<"+"<<im2<<"i) = "<<print_mul_1()<<"+"<<print_mul_2()<<"i"<<endl;
    }
};
int main()
{
    double re1_, im1_, re2_, im2_;
    cout<<"Enter real part of complex 1:"<<endl;
    cin>>re1_;
    cout<<"Enter imaginary part of complex 1:"<<endl;
    cin>>im1_;
    cout<<"Enter real part of complex 2:"<<endl;
    cin>>re2_;
    cout<<"Enter imaginary part of complex 2:"<<endl;
    cin>>im2_;
    complex c={re1_, im1_, re2_, im2_};
    cout<<endl;
    cout<<endl;
    cout<<"SUM OF COMPLEX NUMBERS"<<endl;
    cout<<"________________________"<<endl;
    c.print_sum();
    cout<<endl;
    cout<<"DIFF OF COMPLEX NUMBERS"<<endl;
    cout<<"________________________"<<endl;
    c.print_diff();
    cout<<endl;
    cout<<"MUL OF COMPLEX NUMBERS"<<endl;
    cout<<"________________________"<<endl;
    c.print_mul();
    return 0;
}