//displaying details of student using classes
#include<iostream>
#include<string>
using namespace std;
class student 
{
    public:
    string name;
    int roll_no;
    string gender;
    string dob;
    float marks;
    string blood_group;
};
int main()
{
    int n;
    cout<<"Enter number of students: "<<endl;
    cin>>n;
    student details_name[n], details_roll_no[n], details_gender[n], details_dob[n], details_marks[n], details_blood_group[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Enter name of student "<<i+1<<":"<<endl;
        cin>>details_name[i].name;
        cout<<"Enter roll_no of student "<<i+1<<":"<<endl;
        cin>>details_roll_no[i].roll_no;
        cout<<"Enter gender of student "<<i+1<<":"<<endl;
        cin>>details_gender[i].gender;
        cout<<"Enter dob of student "<<i+1<<":"<<endl;
        cin>>details_dob[i].dob;
        cout<<"Enter marks of student "<<i+1<<":"<<endl;
        cin>>details_marks[i].marks;
        cout<<"Enter blood group of student "<<i+1<<":"<<endl;
        cin>>details_blood_group[i].blood_group;
    }
    cout<<endl;
    cout<<endl;

    cout<<"1. ALL STUDENT DETAILS"<<endl;
    cout<<"2. SPECIFIC STUDENT DETAIL"<<endl;

    cout<<endl;

    int ch1;
    cout<<"Enter choice of seeing all student report or individual reports: "<<endl;
    cin>>ch1;
    cout<<endl;
    if (ch1==1)
    {
        cout<<"****ALL STUDENTS MARKS REPORT****"<<endl;
        cout<<"___________________________________"<<endl;
        for (int i=0; i<n; i++)
        {
            cout<<"DETAILS OF STUDENT "<<i+1<<endl;
            cout<<"_______________________"<<endl;
            cout<<"Name: "<<details_name[i].name<<endl;
            cout<<"Roll No: "<<details_roll_no[i].roll_no<<endl;
            cout<<"Gender: "<<details_gender[i].gender<<endl;
            cout<<"DOB: "<<details_dob[i].dob<<endl;
            cout<<"Marks: "<<details_marks[i].marks<<endl;
            cout<<"Blood Group: "<<details_blood_group[i].blood_group<<endl;
            cout<<endl;
            cout<<endl;
        }
    }
    else if (ch1==2)
    {
        cout<<"a) STUDENT FINDING BY NAME"<<endl;
        cout<<"b) STUDENT FINDING BY roll_no"<<endl;
        char ch2;
        cout<<"Enter choice to display: "<<endl;
        cin>>ch2;
        if (ch2=='a')
        {
            string finding_by_name;
            cout<<"Enter name of student to display details: "<<endl;
            cin>>finding_by_name;
            cout<<endl;
            for (int i=0; i<n; i++)
            {
                if (finding_by_name==details_name[i].name)
                {
                    cout<<"Details of student "<<i+1<<endl;
                    cout<<"______________________"<<endl;
                    cout<<"Name: "<<details_name[i].name<<endl;
                    cout<<"Roll No: "<<details_roll_no[i].roll_no<<endl;
                    cout<<"Gender: "<<details_gender[i].gender<<endl;
                    cout<<"DOB: "<<details_dob[i].dob<<endl;
                    cout<<"Marks: "<<details_marks[i].marks<<endl;
                    cout<<"Blood Group: "<<details_blood_group[i].blood_group<<endl;
                }
                else
                {
                    cout<<"Sorry these student details are not with us!!"<<endl;
                    break;
                }
            }
        }
        else if (ch2=='b')
        {
            int finding_by_roll_no;
            cout<<"Enter name of student to display details: "<<endl;
            cin>>finding_by_roll_no;
            cout<<endl;
            for (int i=0; i<n; i++)
            {
                if (finding_by_roll_no==details_roll_no[i].roll_no)
                {
                    cout<<"Details of student "<<i+1<<endl;
                    cout<<"______________________"<<endl;
                    cout<<"Name: "<<details_name[i].name<<endl;
                    cout<<"Roll No: "<<details_roll_no[i].roll_no<<endl;
                    cout<<"Gender: "<<details_gender[i].gender<<endl;
                    cout<<"DOB: "<<details_dob[i].dob<<endl;
                    cout<<"Marks: "<<details_marks[i].marks<<endl;
                    cout<<"Blood Group: "<<details_blood_group[i].blood_group<<endl;
                }
                else
                {
                    cout<<"Sorry this specific student details are not with us!!"<<endl;
                    break;
                }
            }
        }
        else
        {
            cout<<"Pls chose only from given options!!"<<endl;
        }
    }
    else
    {
        cout<<"Pls chose only from given options!!"<<endl;
    }
}