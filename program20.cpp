//binary searching in c++
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, k;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int array[n];
    for (int i=0; i<n; i++)
    {
        cout<<"enter element "<<i+1<<":"<<endl;
        cin>>array[i];
    }
    for (int i=0; i<n; i++)
    {
        cout<<"element "<<i+1<<" of array is: "<<array[i]<<endl;
    }
    cout<<"Enter the element to search for: "<<endl;
    cin>>k;
    if (binary_search(array, array+n, k))
    {
        cout<<""<<k<<" has been found!"<<endl;
    }
    else
    {
        cout<<""<<k<<" has not been found!"<<endl;
    }
    return 0;
}