//to convert decimal into binary, octal and hexadecimal
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int ch;
    

    cout<<"1. Decimal to Binary"<<endl;
    cout<<"2. Decimal to Octal"<<endl;
    cout<<"3. Decimal to Hexadecimal"<<endl;

    cout<<"Enter the choice of which conversion you want to see: "<<endl;
    cin>>ch;
    
    // if (ch==1)
    // {
    // }

    //to convert decimal into binary
    int x_binary, i_binary, rem_binary, y_binary;
    int reverse_binary=0;
    cout<<"DECIMAL TO BINARY"<<endl;
    cout<<"*****************"<<endl;
    cout<<"Enter the number to convert into binary: "<<endl;
    cin>>x_binary;
    cout<<endl;
    while (x_binary!=0)
    {
        i_binary=x_binary%2;
        x_binary=floor(x_binary/2);
        cout<<i_binary; 
    }
    cout<<endl;
    cout<<"enter the same number as displayed above: "<<endl;
    cin>>y_binary;
    while (y_binary!=0)
    {
        rem_binary=y_binary%10;
        reverse_binary=(reverse_binary*10)+rem_binary;
        y_binary/=10;
    }
    cout<<"Binary Number: "<<reverse_binary<<endl;
    cout<<"THE END"<<endl;
    cout<<endl;

    // else if (ch==2)
    // {
    // }

    //to convert decimal into octal
    int x_octal, i_octal, rem_octal, y_octal;
    int reverse_octal=0;
    cout<<"DECIMAL TO OCTAL"<<endl;
    cout<<"*****************"<<endl;
    cout<<"Enter the number to convert into octal: "<<endl;
    cin>>x_octal;
    cout<<endl;
    while (x_octal!=0)
    {
        i_octal=x_octal%8;
        x_octal=floor(x_octal/8);
        cout<<i_octal; 
    }
    cout<<endl;
    cout<<"enter the same number as displayed above: "<<endl;
    cin>>y_octal;
    while (y_octal!=0)
    {
        rem_octal=y_octal%10;
        reverse_octal=(reverse_octal*10)+rem_octal;
        y_octal/=10;
    }
    cout<<"Octal Number: "<<reverse_octal<<endl;
    cout<<"THE END"<<endl;
    

    // else if (ch==3)
    // {
    //    
    // }

    //  to convert decimal into hexadecimal
    int x_hexadecimal, i_hexadecimal, rem_hexadecimal, y_hexadecimal;
    int reverse_hexadecimal=0;
    cout<<"DECIMAL TO HEXADECIMAL"<<endl;
    cout<<"*****************"<<endl;
    cout<<"Enter the number to convert into hexadecimal: "<<endl;
    cin>>x_hexadecimal;
    cout<<endl;
    while (x_hexadecimal!=0)
    {
        i_hexadecimal=x_hexadecimal%16;
        x_hexadecimal=floor(x_hexadecimal/16);
        cout<<i_hexadecimal; 
    }
    cout<<endl;
    cout<<"enter the same number as displayed above: "<<endl;
    cin>>y_hexadecimal;
    while (y_hexadecimal!=0)
    {
        rem_hexadecimal=y_hexadecimal%10;
        reverse_hexadecimal=(reverse_hexadecimal*10)+rem_hexadecimal;
        y_hexadecimal/=10;
    }
    cout<<"Hexadecimal Number: "<<reverse_hexadecimal<<endl;
    cout<<"THE END"<<endl;
    return 0;
}