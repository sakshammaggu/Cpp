#include<iostream>
using namespace std;
class average
{
    private:
    double value, total_items;
    
    public:

    double print_avg()
    {
        return value/total_items;
    }
    void set_num_value(double value)
    {
        this->value=value;
    }
};
int main()
{
    int n;
    cout<<"Enter number of objects: "<<endl;
    cin>>n;
    double numbers[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Enter number "<<i+1<<endl;
        cin>>numbers[i];
        cout<<endl;
    }
    cout<<endl;
    average avg[n];
    for (int i=0; i<n; i++)
    {
        avg[i].set_num_value(numbers[i]);
    }
    for (int i=0; i<n; i++)
    {
        avg[i].print_avg();
    }
    
}