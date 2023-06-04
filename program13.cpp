//a positive integer n, return the smallest positive integer that is a multiple of both 2 and n
#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cin>>n;
   
    for (i=1; i>0; i++)
    {
        if ((i%n==0)&&(i%2==0)&&(n>=1)&&(n<=150))
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}