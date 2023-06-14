//getting student details using get-set method in classes (hackerrank problem)
#include<iostream>
#include<string>
using namespace std;
class Student
{
    
    private:
    int age;
    string first_name, last_name;
    int standard;
    
    public:
    
    //get_set for age
    int get_age()
    {
        return age;
    }
    void set_age(int age)
    {
        this->age=age;
    }
    
    //get-set for first_name
    string get_first_name()
    {
        return first_name;
    }
    void set_first_name(string first_name)
    {
        this->first_name=first_name;
    }
    
    //get-set for last_name
    string get_last_name()
    {
        return last_name;
    }
    void set_last_name(string last_name)
    {
        this->last_name=last_name;
    }
    
    //get-set for standard
    int get_standard()
    {
        return standard;
    }
    void set_standard(int standard)
    {
        this->standard=standard;
    }
};
int main()
{
    Student stud;
    int a, stand;
    string fn, ln;
    
    cout<<"Enter age of student: "<<endl;
    cin>>a;
    cout<<endl;
    cout<<"Enter first_name of student: "<<endl;
    cin>>fn;
    cout<<endl;
    cout<<"Enter last_name of student: "<<endl;
    cin>>ln;
    cout<<endl;
    cout<<"Enter standard of student: "<<endl;
    cin>>stand;
    cout<<endl;

    stud.set_age(a);
    stud.set_first_name(fn);
    stud.set_last_name(ln);
    stud.set_standard(stand);
    
    cout<<stud.get_age()<<endl;
    cout<<stud.get_last_name()<<", "<<stud.get_first_name()<<endl;
    cout<<stud.get_standard();
    cout<<endl;
    cout<<endl;
    cout<<stud.get_age()<<","<<stud.get_first_name()<<","<<stud.get_last_name()<<","<<stud.get_standard()<<endl;
    return 0;
}