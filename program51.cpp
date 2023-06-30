//inputting two array sizes and values and merging it and sorting it
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m, n;
    cout<<"Enter size of first array: "<<endl;
    cin>>m;
    cout<<"Enter size of second array: "<<endl;
    cin>>n;
    int a[m], b[n], x[m+n], i, j;
    cout<<endl;
    for (int i=0; i<m; i++)
    {
        cout<<"Enter element of array 1 at index "<<i<<":"<<endl;
        cin>>a[i];
    }
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<"Enter element of array 2 at index "<<i<<":"<<endl;
        cin>>b[i];
    }
    cout<<endl;
    cout<<"1st array: ";
    cout<<"[";
    for (int i=0; i<m; i++)
    {
        cout<<a[i]<<", ";
    }
    cout<<"]";
    cout<<endl;
    cout<<"2nd array: ";
    cout<<"[";
    for (int i=0; i<n; i++)
    {
        cout<<b[i]<<", ";
    }
    cout<<"]";
    for (int i=0; i<m; i++)
    {
        x[i]=a[i];
    }
    for (int i=m; i<m+n; i++)
    {
        x[i]=b[i-m];
    }
    cout<<endl;
    cout<<"merged array: ";
    cout<<"[";
    for (int i=0; i<m+n; i++)
    {
        cout<<x[i]<<", ";
    }
    cout<<"]"<<endl;
    sort(x, x+m+n);
    cout<<"sorted merged array in ascending order: ";
    cout<<"[";
    for (int i=0; i<m+n; i++)
    {
        cout<<x[i]<<", ";
    }
    cout<<"]";
}