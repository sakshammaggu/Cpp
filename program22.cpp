//reversing a string using stacks in c++
#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of string: "<<endl;
    cin>>n;
    char str[n];
    cout<<"Enter the string to be reversed: "<<endl;
    cin>>str;
    if (strlen(str)==n)
    {
        stack<char>s;
        for (int i=0; i<strlen(str); i++)
        {
            s.push(str[i]);
        }
        cout<<"Reversed string: "<<endl;
        while (!s.empty())
        {
            cout<<s.top();s.pop();
        }
    }
    else
    {
        cout<<"Enter the string which matches the same size as specified"<<endl;
    }
}