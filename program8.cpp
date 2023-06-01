#include<iostream>
using namespace std;
int main()
{
    int a, b, n, i , j, size1, size2, array1[20]; 
    char array2[20][20];
    cout<<"enter number a of range [a,b]"<<endl;
    cin>>a;
    cout<<"enter number b of range [a,b]"<<endl;
    cin>>b;
    cout<<"enter number n in range [a,b]"<<endl;
    cin>>n;
    cout<<"enter size of array1"<<endl;
    cin>>size1;
    cout<<"enter size of array2"<<endl;
    cin>>size2;
    
    while (true)
    {
        for (int i=1; i<(size1+1); i++)
        {
            cout<<"enter values in array1:"<<endl;
            cin>>array1[i];
        }
        for (int i=1; i<(size1+1); i++) 
        {
            cout<<"values in array1 are "<<array1[i]<<endl;
        }
        for (int j=1; j<(size2+1); j++)
        {
            cout<<"enter values in array2:"<<endl;
            cin>>array2[j];
        }
        for (int j=1; j<(size2+1); j++)
        {
            cout<<"values in array2 are "<<array2[j]<<endl;
        }
        // if ((n>=1)&&(n<=9))
        // {
        //     if (n==array1[i])
        //     {
        //         cout<<n<<"-"<<array2[j];
        //     }
        // }
        // if((n>9)&&(n%2==0))
        // {
        //     cout<<"even"<<endl;
        // }
        // else if ((n>9)&&(n%2!=0))
        // {
        //     cout<<"odd"<<endl;
        // }
    }
    return 0;
}