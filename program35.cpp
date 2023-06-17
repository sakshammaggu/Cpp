/*
Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
*/
#include<iostream>
using namespace std;
class employee
{
    private:
    int salary, number_of_hours_per_day;

    public:
    void get_info(long int salary, int number_of_hours_per_day)
    {
        this->salary=salary;
        this->number_of_hours_per_day=number_of_hours_per_day;
    }
    int add_sal()
    {
        if (salary<500)
        {
           return salary+10;
        }
        else
        {
            return salary;
        }
    }
    int add_work()
    {
        if (number_of_hours_per_day>6)
        {
            return salary+5;
        }
        else
        {
            return salary;
        }
    }
};
int main()
{
    int n;
    cout<<"Enter number of emplpyees: "<<endl;
    cin>>n;
    cout<<endl;
    int sal[n], work_hours[n];
    employee empl[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Enter salary of employee "<<i+1<<":"<<endl;
        cin>>sal[i];
        cout<<"Enter number of work hours "<<i+1<<":"<<endl;
        cin>>work_hours[i];
        cout<<endl;     
    }
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        empl[i].get_info(sal[i], work_hours[i]);
    }
    for (int i=0; i<n; i++)
    {
        cout<<"Updated salary of employee "<<i+1<<": ";
        empl[i].add_sal();
        empl[i].add_work();

        if ((sal[i]<500)&&(work_hours[i]>6))
        {
            cout<<(empl[i].add_sal())+(empl[i].add_sal()-empl[i].add_work());
        }
        else if ((empl[i].add_sal())>(empl[i].add_work()))
        {
            cout<<empl[i].add_sal();
        }
        else if ((empl[i].add_sal())<(empl[i].add_work()))
        {
            cout<<empl[i].add_work();
        }
        cout<<endl;
    }
    return 0;
}