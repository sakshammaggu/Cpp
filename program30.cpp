//assigning and printing different details of n number of students using get-set in classes
#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    int roll_no;
    long int phone_no;
    string address;

    public:

    string get_name()
    {
        return name;
    }
    void set_name(string name)
    {
        this->name=name;
    }

    int get_roll_no()
    {
        return roll_no;
    }
    void set_roll_no(int roll_no)
    {
        this->roll_no=roll_no;
    }

    string get_address()
    {
        return address;
    }
    void set_address(string address)
    {
        this->address=address;
    }

    long int get_phone_no()
    {
        return phone_no;
    }
    void set_phone_no(long int phone_no)
    {
        this->phone_no=phone_no;
    }
};
int main()
{
    int n;
    cout<<"Enter number of students: "<<endl;
    cin>>n;
    student stud[n];
    string name_[n], address_[n];
    int roll_no_[n];
    long int phone_no_[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Enter name of student "<<i+1<<":"<<endl;
        cin>>name_[i]; 
        cout<<"Enter roll_no of student "<<i+1<<":"<<endl;
        cin>>roll_no_[i]; 
        cout<<"Enter address of student "<<i+1<<":"<<endl;
        cin>>address_[i]; 
        cout<<"Enter phone_no of student "<<i+1<<":"<<endl;
        cin>>phone_no_[i]; 
        cout<<endl;
        cout<<endl;
    }
    for (int i=0; i<n; i++)
    {
        stud[i].set_name(name_[i]);
        stud[i].set_roll_no(phone_no_[i]);
        stud[i].set_address(address_[i]);
        stud[i].set_phone_no(phone_no_[i]);
    }
    cout<<endl;
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<"Details of student "<<1+1<<":"<<endl;
        cout<<"_______________________"<<endl;
        cout<<"Name: "<<stud[i].get_name()<<endl;
        cout<<"Roll_no: "<<stud[i].get_roll_no()<<endl;
        cout<<"Address: "<<stud[i].get_address()<<endl;
        cout<<"Phone_no: "<<stud[i].get_phone_no()<<endl;
    }
}