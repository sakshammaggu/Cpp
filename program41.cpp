/*Harry was studying a magic book that categorizes the magic spells into 3 categories
- Good , Worst and Bad. If any spell contains all the vowels in alphabetical order then 
that spell is categorized as Good. If it contains the vowels in reverse alphabetical order, 
then that spell is categorized as Worst. All the other spells that do not fall in any of 
the categories before are categorized as Bad. Harry was studying a magic book that categorizes 
the magic spells into 3 categories - Good , Worst and Bad. If any spell contains all the vowels 
in alphabetical order then that spell is categorized as Good. If it contains the vowels in reverse 
alphabetical order , then that spell is categorized as Worst. All the other spells that do not fall 
in any of the categories before are categorized as Bad. ----------------->hackerearth problem
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, count=0;
    cout<<"enter n: "<<endl;
    cin>>n;
    string s[n];
    for (int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for (int i=0; i<n; i++)
    {
       for (int j=0; j<s[i].size(); j++)
       {
            if ((s[i])[j]=='i')
            {
                int t=j+1;
                for (int i=0; i<n; i++)
                {
                    for (int t; t<s[i].size(); t++)
                    {
                        if ((s[i])[t]=='o')
                        {
                            int y=t+1;
                            for (int i; i<n; i++)
                            {
                                for (int y; y<s[i].size(); y++)
                                {
                                    if ((s[i])[y]=='u')
                                    {
                                        cout<<"Good"<<endl;
                                        ++count;
                                        break;
                                    }
                                }
                            }
                            
                        }
                    }
                }
            }
            else if ((s[count])[j]=='e')
            {
                for (int count; count<n; count++)
                {
                    for (int j=1; j<s[count].size(); j++)
                    {
                        if ((s[count])[j]=='a')
                        {
                            cout<<"Worst"<<endl;
                            ++count;
                            break;
                        }
                    }
                }
            }
            else if ((s[count])[j]=='a')
            {
                for (int count; count<n; count++)
                {
                    for (int j=1; j<s[count].size(); j++)
                    {
                        if ((s[count])[j]=='e')
                        {
                            for (int count; count<n; count++)
                            {
                                for (int j=2; j<s[i].size(); j++)
                                {
                                    if ((s[count])[j]=='o')
                                    {
                                        cout<<"Bad"<<endl;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
       }
    }



             









    //         else if ((s[i])[j]=='o')
    //         {
    //             for (int i=0; i<n; i++)
    //             {
    //                 for (int j=1; j<s[i].size(); j++)
    //                 {
    //                     if ((s[i])[j]=='e')
    //                     {
    //                         for (int i=0; i<n; i++)
    //                         {
    //                             for (int j=2; j<s[i].size(); j++)
    //                             {
    //                                 if ((s[i])[j]=='a')
    //                                 {
    //                                     cout<<"Bad"<<endl;
    //                                     break;
    //                                 }
    //                             }
    //                         }
    //                     }
    //                 }
    //             }
    //         }



        




















}