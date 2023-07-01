#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name, address;
    int roll_no, mobile_no, marks;

    public:
    void input()
    {
        cin>>name;
        cin>>roll_no;
        cin>>mobile_no;
        cin>>marks;
        cin>>address;
    }
    void display()
    {
        cout<<name;
        cout<<roll_no;
        cout<<mobile_no;
        cout<<marks;
        cout<<address;
    }
    // void topper()
    // {

    // }
    // float average()
    // {
        
    // }
};
int main()
{
    int n;
    cout<<"enter no. of students:"<<endl;
    cin>>n;
    student details;
    int marks[n];
    for (int i=1; i<(n+1); i++)
    {
        cout<<"enter details of student "<<i<<endl;
        details.input();
        cout<<endl;
    }
    for (int i=1; i<(n+1); i++)
    {
        cout<<"details of student "<<i<<endl;
        details.display();
        cout<<endl;
    }
    for (int i=1; i<(n+1); i++)
    {
        cout<<"enter marks of student "<<i<<endl;
        cin>>marks[i];
    }
    

    
}