//replacing and rotating in array in c++
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, ch;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int array[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Enter element "<<i+1<<":"<<endl;
        cin>>array[i];
    }
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<"Element "<<i+1<<" of original array is: "<<array[i]<<endl;
    }
    cout<<endl;
    cout<<"****1. Replace****"<<endl;
    cout<<"****2. Rotate****"<<endl;
    cout<<endl;
    cout<<"Enter choice of operation which you want to do: "<<endl;
    cin>>ch;
    cout<<endl;
    if (ch==1)
    {
        //replacing in array
        int x1, k1;
        cout<<"Enter element position which you want to be replaced: "<<endl;
        cin>>x1;
        cout<<"Enter element which you want to see at replaced position: "<<endl;
        cin>>k1;
        for (int i=0; i<n ; i++)
        {
            if (array[i]==x1)
            {
                replace(array, array+n, x1, k1);
            }
            else
            {
                cout<<"Element cant be replaced as it's not found in array!"<<endl;
            }
        }
        for (int i=0; i<n; i++)
        {
            cout<<"Element "<<i+1<<" of replaced array: "<<array[i]<<endl;
        }
    }
    else if (ch==2)
    {
        //rotating in array
        int x2, k2;
        cout<<"Enter element position after which you want to be rotated: "<<endl;
        cin>>x2;
        rotate(array, array+x2, array+n);
        cout<<endl;
        for (int i=0; i<n; i++)
        {
            cout<<"Element "<<i+1<<" of rotated array: "<<array[i]<<endl;
        }
    }
    else 
    {
        cout<<"Pls chose only from desired options."<<endl;
    }
    return 0;
}