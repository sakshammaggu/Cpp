//printing greatest of four numbers using functions
#include<iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d)
{
    if ((a>b)&&(a>c)&&(a>d))
    {
        return a;
    }
    else if ((b>a)&&(b>c)&&(b>d))
    {
        return b;
    }
    else if ((c>b)&&(c>a)&&(c>d))
    {
        return c;
    }
    else 
    {
        return d;
    }
}

int main()
{
    int a1, a2, a3, a4;
    cin>>a1;
    cin>>a2;
    cin>>a3;
    cin>>a4;
    int max=max_of_four(a1, a2, a3, a4);
    cout<<max;
   
    return 0;
}

