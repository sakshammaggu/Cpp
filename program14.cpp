//inserting an array and matching the target value by adding indices of array
#include<iostream>
using namespace std;
int main()
{
    int i, n, j, target;
    cout<<"enter target value: "<<endl;
    cin>>target;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int array[n];
    for (i=0; i<n; i++)
    {
        cout<<"enter values in array:"<<endl;
        cin>>array[i];
    }
    for (i=0; i<n; i++)
    {
        cout<<"value at "<<i<<" is "<<array[i]<<endl;
    }
    for (i=0; i<n; i++)
    {
        for (j=(i+1); j<n; j++)
        {
            if ((sizeof(array)>=2)&&(sizeof(array)<=10000)&&(array[i]>=-1000000000)&&(array[i]<=1000000000)&&(target>=-1000000000)&&(target<=1000000000))
            {
                if ((array[i]+array[j])==target)
                cout<<"["<<i<<", "<<j<<"]"<<endl;
            }
        }
    }
    return 0;
}