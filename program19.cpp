//bubble sorting using c++ standard library
#include<iostream>
#include<algorithm>
using namespace std;
bool compare1 (int i, int j)
{
    return (i>j);
}
bool compare2 (int i, int j)
{
    return (i<j);
}
int main()
{
    int n;
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

    sort(array, array+n, compare1);
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<"element "<<i+1<<" of sorted array in descending order: "<<array[i]<<endl;
    }

    sort(array, array+n, compare2);
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<"element "<<i+1<<" of sorted array in ascending order: "<<array[i]<<endl;
    }

    return 0;
}