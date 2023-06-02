#include<iostream>
#include<cstring>
using namespace std;

int main() 
{
    char str1[100], str2[100], str3[100], temp;
    cin>>str1;
    cin>>str2;
    strcpy(str3, str1);
    cout<<strlen(str1)<<" "<<strlen(str2)<<endl;
    cout<<strcat(str1, str2)<<endl;
    temp=str3[0];
    str3[0]=str2[0];
    str2[0]=temp;
    cout<<str3<<" "<<str2<<endl;
    return 0;
}
