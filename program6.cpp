// to print max of three numbers
#include<iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout<<"enter a: "<<endl;
    cin>>a;
    cout<<"enter b: "<<endl;
    cin>>b;
    cout<<"enter c: "<<endl;
    cin>>c;
    if (a>b)
    {
        if (a>c)
        {
            max=a;
        }
        else
        {
            max=c;
        }
    }
    else
    {
        if (b>c)
        {
            max=b;
        }
        else
        {
            max=c;
        }
    }
    cout<<"greatest is: "<<max<<endl;
    return 0;
}