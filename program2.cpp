//applying arithmetic operations on two numbera
#include<iostream>
#include<cmath>
int main()
{
    float a, b;
    std::cout<<"****ARITHMETIC OPERARIONS****\n";
    std::cout<<"Enter the two numbers on which you want to apply arithmetic operators\n";
    std::cin>>a>>b;
    std::cout<<"sum = "<<(a+b);
    std::cout<<std::endl;
    std::cout<<"diff = "<<(a-b);
    std::cout<<std::endl;
    std::cout<<"product = "<<(a*b);
    std::cout<<std::endl;
    std::cout<<"div = "<<(a/b);
    std::cout<<std::endl;
    std::cout<<"sqrt of "<<a<<" is "<<sqrt(a);
    std::cout<<std::endl;
    std::cout<<"sqrt of "<<b<<" is "<<sqrt(b);
    std::cout<<std::endl;
    std::cout<<"power of "<<a<<" raised to "<<b<<" is "<< (pow(a,b));
    std::cout<<std::endl;
    return 0;
}