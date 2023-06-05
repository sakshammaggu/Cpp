// to check whether entered number is palindrome or not (using arrays)
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i, n;
    cout<<"enter size of number: "<<endl;
    cin>>n;
    int x[n], y[n];
    cout<<"enter number for which you want to check whether its a palidrome or not: "<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    for (int i=0; i<n; i++)
    {
        y[i]=x[i];
    }
    for (int i=0; i<n; i++)
    {
        if (n%2==0)
        {
            y[i]=y[n-i-1];
            if (y[i]==x[i])
            {
                cout<<"TRUE; it's a palindrome number"<<endl;
                break;
            }
            else
            {
                cout<<"FALSE; it's not a palindrome number"<<endl;
                break;
            }
        }
        else
        {
            if (i!=(floor(n/2)))
            {
                y[i]=y[n-i-1];
                if (y[i]==x[i])
                {
                    cout<<"TRUE; it's a palindrome number"<<endl;
                    break;
                }
                else
                {
                    cout<<"FALSE; it's not a palindrome number"<<endl;
                    break;
                }
            }
            else
            {
                break;
            }
        }
    }
    return 0;
}