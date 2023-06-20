//applying constness on constant and non-constant objects and member functions of a class
#include<iostream>
using namespace std;
class myclass
{
    public:
    int my_pri_member, my_sec_member;

    myclass(int m_pri, int m_sec):
    my_pri_member(m_pri), my_sec_member(m_sec){}

    //constant member function
    int get_member() const
    {
        return my_pri_member;
    }

    //non-constant member function
    void set_member(int i)
    {
        my_pri_member=i;
    }

    //constant member function
    void print() const
    {
        cout<<my_pri_member<<", "<<my_sec_member<<endl;
    }
};
int main()
{
    int a, b, c, d, e, f;
    cout<<"Enter 1st number for non constant object of class: "<<endl;
    cin>>a;
    cout<<"Enter 2nd number for non constant object of class: "<<endl;
    cin>>b;
    cout<<endl;
    cout<<"Enter 1st number for constant object of class: "<<endl;
    cin>>c;
    cout<<"Enter 2nd number for constant object of class: "<<endl;
    cin>>d;
    cout<<endl;
    cout<<"Enter number for set_member: "<<endl;
    cin>>e;
    cout<<"Enter my_sec_number: "<<endl;
    cin>>f;
    cout<<endl;

    myclass myobj(a,b); //non-constant object
    const myclass myconstobj(c,d); //constant object

    cout<<myobj.get_member()<<endl;
    myobj.set_member(e);
    myobj.my_sec_member=f;
    myobj.print();

    cout<<myconstobj.get_member()<<endl;
    // myconstobj.set_member(e); ----------->gives error (can't ivoke constant member function)
    // myconstobj.my_pri_member=f; ----------->gives error (can't ivoke constant member function)
    myconstobj.print();
}