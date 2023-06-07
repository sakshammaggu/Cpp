//general type bubble sorting
#include<iostream>
using namespace std;
int main()
{
    int n, temp;
    cout<<"enter size of array to do bubble sorting: "<<endl;
    cin>>n;
    int array[n];
    for (int i=0; i<n; i++)
    {
        cout<<"enter values in array: "<<endl;
        cin>>array[i];
    }
    for (int i=0; i<n; i++)
    {
        cout<<"element "<<i+1<<" of original array is "<<array[i]<<endl;
    }
    for (int step=0; step<n-1; ++step)
    {
        for (int i=0; i<n-step-1; ++i)
        {
            if (array[i]>array[i+1])
            {
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<"element "<<i+1<<"of sorted array is "<<array[i]<<endl;
    }
    return 0;
}