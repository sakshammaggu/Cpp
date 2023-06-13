//get and set methods in classes
#include<iostream>
#include<string>
using namespace std;
class employee
{
    private:
    string name;
    string address;
    double sal_fixed;
    double sal_variable;

    public:
    void Employee()
    {
        double sal_fixed, sal_variable;
        cout<<"Enter sal_fixed: "<<endl;
        cin>>sal_fixed;
        cout<<"Enter sal_variable: "<<endl;
        cin>>sal_variable;
    }
    string get_name()
    {
        return name;
    }
    void set_name(string name)
    {
        this->name=name;
    }
    void set_addr(string address)
    {
        this->address=address;
    }
    double get_sal_fixed()
    {
        return sal_fixed;
    }
    double salary()
    {
        return ((sal_fixed)+(sal_variable));
    }
};
int main()
{
    employee empl;
    string name, address;
    cout<<"Enter name of employee: "<<endl;
    cin>>name;
    empl.set_name(name);
    cout<<"Enter address of employee: "<<endl;
    cin>>address;
    empl.set_addr(address);
    cout<<"Name of employee: "<<empl.get_name()<<endl;
    empl.Employee();
    cout<<"Fixed salary: "<<empl.get_sal_fixed()<<endl;
    cout<<"Salary: "<<empl.salary()<<endl;
}