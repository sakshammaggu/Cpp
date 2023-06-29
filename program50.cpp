/*
We want to calculate the total marks of each student of a class in Physics, Chemistry 
and Mathematics and the average marks of the class. The number of students in the class 
are entered by the user. Create a class named Marks with data members for roll number, name 
and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry 
and Mathematics, which are used to define marks in individual subject of each student. 
*/
#include<iostream>
#include<string>
using namespace std;
class marks
{
    protected:
    int roll_no, marks;
    string name;
    public:
    int get_roll_no(int roll_no)
    {
        return roll_no;
    }
    string get_name(string name)
    {
        return name;
    }
};
class phy: public marks
{
    public:
    int phy_marks;
    int get_phy_marks(int phy_marks)
    {
        return phy_marks;
    }
};
class chem: public marks
{
    public:
    int chem_marks;
    int get_chem_marks(int chem_marks)
    {
        return chem_marks;
    }
};
class maths: public marks
{
    public:
    int maths_marks;
    int get_maths_marks(int maths_marks)
    {
        return maths_marks;
    }
};
class student_dets: public phy, public chem, public maths
{
    public:
    void get_inherited()
    {
        cout<<"this is inherited class."<<endl;
    }
};
int main()
{
    student_dets dets;
    dets.get_inherited();
    int x;
    cout<<"Enter no. of students: "<<endl;
    cin>>x;
    int r[x], p[x], c[x], m[x];
    string n[x];
    for (int i=0; i<x; i++)
    {
        cout<<"Enter roll no of student "<<i+1<<": "<<endl;
        cin>>r[i];
        cout<<"Enter name of student "<<i+1<<": "<<endl;
        cin>>n[i];        
        cout<<"Enter phy marks of student "<<i+1<<": "<<endl;
        cin>>p[x];
        cout<<"Enter chem marks of student "<<i+1<<": "<<endl;
        cin>>c[x];
        cout<<"Enter math marks of student "<<i+1<<": "<<endl;
        cin>>m[x];
        cout<<endl<<endl;
    }
    for (int i=0; i<x; i++)
    {
        cout<<"Roll no of student "<<i+1<<": "<<r[i]<<endl;
        cout<<"Name of student "<<i+1<<": "<<n[i]<<endl;
        cout<<"Phy marks of student "<<i+1<<": "<<dets.get_phy_marks(p[i])<<endl;
        cout<<"Chem marks of student "<<i+1<<": "<<dets.get_chem_marks(c[i])<<endl;
        cout<<"Maths marks of student "<<i+1<<": "<<dets.get_maths_marks(m[i])<<endl;
        cout<<endl<<endl;
    }
}