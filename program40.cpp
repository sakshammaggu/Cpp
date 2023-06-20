//rotating elements of array without using algorithm stl
#include<iostream>
using namespace std;
int main() 
{
	int t, n, k;
    cout<<"Enter number of testcases: "<<endl;
	cin>>t;
    cout<<"Enter total number of elements in array: "<<endl;
	cin>>n;
    cout<<"Enter place at which array should rotate: "<<endl;
    cin>>k;
	int a[n], b[n];
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for (int i=0; i<n-k; i++)
	{
		b[n-k-1+i]=a[i];
	}
	for (int i=n-k; i<n; i++)
	{
		b[i-k-1]=a[i];
	}
	if ((t>=1)&&(t<=20)&&(n>=1)&&(n<100000)&&(k>=0)&&(k<1000000))
	{
		for (int i=0; i<n; i++)
		{
			if ((a[i]>=0)&&(a[i]<=1000000))
			{
				cout<<b[i]<<" ";
			}
		}
	}
	return 0;
}