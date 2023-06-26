/*
You are given a large integer represented as an integer array digits, where each digits[i] is the 
ith digit of the integer. The digits are ordered from most significant to least significant
in left-to-right order. The large integer does not contain any leading 0's.Increment the
large integer by one and return the resulting array of digits. 

---------->leetcode problem (66. plus one)
*/
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int array[n];

    for (int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    if (n>1)
    {
        if (array[n-1]!=9)
        {
            array[n-1]+=1;
            goto end;
        }
        
        for (int i=0; i<n; i++)
        {
            if (array[n-i-1]==9)
            {
                array[n-i-1]=0;
                array[n-i-2]+=1;
                goto end;
            }
            
        }
        
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if ((array[i]==9)&&(array[j]==9))
                {
                    ++n;
                    array[0]=1;
                    for (int i=1; i<n; i++)
                    {
                        array[i]=0;
                    }
                }
            }
        }
    }
    
    else
    {
        if (array[0]==9)
        {
            ++n;
            array[0]=1;
            array[1]=0;
        }
    }

    end:
    for (int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}