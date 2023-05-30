//to calculate grades based on given some conditions
#include<iostream>
using namespace std;
int main()
{
    int hardness, tensile_strength;
    float carbon_content;
    cout<<"GRADES ARE BEING GIVEN UPON CERTAIN CONDITIONS BASED ON ABOVE TERMS.";
    cout<<"\nenter hardness:";
    cin>>hardness;
    cout<<"\nenter tensile_strength:";
    cin>>tensile_strength;
    cout<<"\nenter carbon_content:";
    cin>>carbon_content;
    if ((hardness>50)&&(carbon_content<0.7)&&(tensile_strength>5600))
    {
        cout<<"\nyou have met all three conditions";
        cout<<"\nyou have been given grade 10";
    }
    else if ((hardness>50)&&(carbon_content<0.7))
    {
        cout<<"\nyou have met condition of hardness and carbon_content conditions";
        cout<<"\nyou have been given grade 9";
    }
    else if ((carbon_content<0.7)&&(tensile_strength>5600))
    {
        cout<<"\nyou have met condition of carbon_content and tensile_strength conditions";
        cout<<"\nyou have been given grade 8";
    }
    else if ((hardness>50)&&(tensile_strength>5600))
    {
        cout<<"\nyou have met condition of hardness and tensile strength conditions";
        cout<<"\n you have been given grade 7";
    }
    else if ((hardness>50)||(carbon_content<0.7)||(tensile_strength>5600))
    {
        cout<<"\nyou have met only one of the above condtion.";
        cout<<"\nyou have been given grade 6";
    }
    else
    {
        cout<<"\nyou have not met any of the above conditions.";
        cout<<"\nyou have been given grade 5";
    }
    return 0;
}