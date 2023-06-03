#include<iostream>
#include<string>
using namespace std;

struct employee
{
    int empl_id;
    string name;
    string gender;
    int mob;
    string email;
    string dob;
    int driving_license;
    int driving_license_expiry_year;
};

struct salary 
{
    float salary_in_ctc;
    float dearness_allowance;
    float bonuses;
    float conveyance_allowance;
    float house_Rent_allowance;
    float medical_allowance;
    float leave_travel_allowance;
    float vehicle_allowance;
    float special_allowance;
    float in_hand_salary;
};
int main()
{
    int n;
    cout<<"Enter total number of employees: "<<endl;
    cin>>n;

    struct employee arr1[n], arr2[n], arr3[n], arr4[n], arr5[n], arr6[n], arr7[n], arr8[n];
    struct salary arr9[n], arr10[n], arr11[n], arr12[n], arr13[n], arr14[n], arr15[n], arr16[n], arr17[n], arr18[n];

    for (int i=0; i<n; i++)
    {
        cout<<"Enter values of employee id of employee "<<i+1<<":"<<endl;
        cin>>arr1[i].empl_id;

        cout<<"Enter name of employee "<<i+1<<":"<<endl;
        cin>>arr2[i].name;

        cout<<"Enter gender of employee "<<i+1<<":"<<endl;
        cin>>arr3[i].gender;

        cout<<"Enter mobile_number of employee "<<i+1<<":"<<endl;
        cin>>arr4[i].mob;

        cout<<"Enter email of employee "<<i+1<<":"<<endl;
        cin>>arr5[i].email;

        cout<<"Enter dob of employee "<<i+1<<":"<<endl;
        cin>>arr6[i].dob;

        cout<<"Enter values of driving license of employee "<<i+1<<":"<<endl;
        cin>>arr3[i].driving_license;

        cout<<"Enter values of driving_license_expiry of employee "<<i+1<<":"<<endl;
        cin>>arr4[i].driving_license_expiry_year;


        cout<<"Enter salary(in CTC) of employee "<<i+1<<":"<<endl;
        cin>>arr9[i].salary_in_ctc;

        cout<<"Enter dearness_allowance of employee "<<i+1<<":"<<endl;
        cin>>arr10[i].dearness_allowance;

        cout<<"Enter bonuses of employee "<<i+1<<":"<<endl;
        cin>>arr11[i].bonuses;

        cout<<"Enter conveyance_allowance of employee "<<i+1<<":"<<endl;
        cin>>arr12[i].conveyance_allowance;

        cout<<"Enter house_rent_allowance of employee "<<i+1<<":"<<endl;
        cin>>arr13[i].house_Rent_allowance;

        cout<<"medical_allowance of employee "<<i+1<<":"<<endl;
        cin>>arr14[i].medical_allowance;

        cout<<"Enter leave_travel_allowance of employee "<<i+1<<":"<<endl;
        cin>>arr15[i].leave_travel_allowance;

        cout<<"Enter vehicle_allowance of employee "<<i+1<<":"<<endl;
        cin>>arr16[i].vehicle_allowance;

        cout<<"Enter special_allowance of employee "<<i+1<<":"<<endl;
        cin>>arr17[i].special_allowance;
    }

    for (int i=0; i<n; i++)
    {
        arr18[i].in_hand_salary=(arr9[i].salary_in_ctc)-((arr10[i].dearness_allowance)+(arr11[i].bonuses)+(arr12[i].conveyance_allowance)+(arr13[i].house_Rent_allowance)+(arr14[i].medical_allowance)+(arr15[i].leave_travel_allowance)+(arr16[i].vehicle_allowance)+(arr17[i].special_allowance));
    }

    for (int i=0; i<n; i++)
    {
        cout<<"Employee id of employee "<<i+1<<": "<<arr1[i].empl_id<<endl;
        cout<<"Name of employee "<<i+1<<": "<<arr2[i].name<<endl;
        cout<<"Gender of employee "<<i+1<<": "<<arr3[i].name<<endl;
        cout<<"Mobile_Number of employee "<<i+1<<": "<<arr4[i].name<<endl;
        cout<<"Email of employee "<<i+1<<": "<<arr5[i].name<<endl;
        cout<<"DOB of employee "<<i+1<<": "<<arr6[i].name<<endl;
        cout<<"Driving License of employee "<<i+1<<": "<<arr7[i].driving_license<<endl;
        cout<<"Driving_licence_expiry of employee "<<i+1<<": "<<arr8[i].driving_license_expiry_year<<endl;

        cout<<"Salary(in CTC) of employee "<<i+1<<": "<<arr9[i].salary_in_ctc<<endl;
        cout<<"Dearness Allowance (DA) of employee "<<i+1<<": "<<arr10[i].dearness_allowance<<endl;
        cout<<"Bonuses of employee "<<i+1<<" is "<<arr11[i].bonuses<<endl;
        cout<<"Conveyance Allowance (CA) of employee "<<i+1<<": "<<arr12[i].conveyance_allowance<<endl;
        cout<<"House_Rent_Allowance (HRA) of employee "<<i+1<<" is "<<arr13[i].house_Rent_allowance<<endl;
        cout<<"Medical Allowance (MA) of employee "<<i+1<<": "<<arr14[i].medical_allowance<<endl;
        cout<<"Leave_Travel Allowance (LTA) of employee "<<i+1<<": "<<arr15[i].leave_travel_allowance<<endl;
        cout<<"Vehicle Allowance (VA) of employee "<<i+1<<": "<<arr16[i].vehicle_allowance<<endl;
        cout<<"Special Allowance (SA) of employee "<<i+1<<": "<<arr17[i].special_allowance<<endl;
        cout<<"In_Hand_Salary of employee "<<i+1<<": "<<arr18[i].in_hand_salary<<endl;

        cout<<endl;
        cout<<endl;
    }
    return 0;
}