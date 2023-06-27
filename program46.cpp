// C++ Program for Enter Patient details using Inheritance
#include<iostream>
#include<string>
using namespace std;
class patient
{
    protected:
    string name, disease;
    int age;
};
class patient_details: public patient
{  
    public:
    void patient_name(string name)
    {
        cout<<"Name= "<<name;
    }
    void patient_age(int age)
    {
        this->age=age;
    }
    void get_age()
    {
        cout<<"Age= "<<age;
    }
    void patient_disease(string disease)
    {
        cout<<"Disease= "<<disease;
    }
};
int main()
{
    int age; string name, disease;
    cout<<"Enter name of patient: ";
    cin>>name;
    cout<<"Enter age of patient: ";
    cin>>age;
    cout<<"Enter disease of patient: ";
    cin>>disease;
    cout<<endl;
    patient_details detail;
    detail.patient_name(name);
    cout<<endl;
    detail.patient_age(age);
    detail.get_age();
    cout<<endl;
    detail.patient_disease(disease);
}