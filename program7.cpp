//making a digital clock
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=1000;
    cout<<"intially clock starts at "<<a<<":"<<b<<":"<<c<<endl;
    while ((c>=0)&&(c<60))
    {
        c++;
        // cout<<" "<<a<<": "<<b<<": "<<c<<endl;
        if (c>=59)
        {
            c=0;
            b++;
            // // cout<<" "<<a<<": "<<b<<": "<<c<<endl;
            if (b>=59)
            {
                b=0;
                a++;
                // cout<<" "<<a<<": "<<b<<": "<<c<<endl;
                if (a==24)
                {
                    // a=0;
                    // b=0;
                    // c=0;
                    break;
                }
            }
        }
        cout<<""<<a<<":"<<b<<":"<<c<<endl;
        Sleep(d);
    }
    return 0;
}