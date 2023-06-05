#include<iostream>
using namespace std;
int main()
{
    int n, f, e, a, b, y ,x;
    cout<<"enter the number of cases for you want to check whether the furniture will be moved: "<<endl;
    cin>>n;
    cout<<"number of cases: "<<n<<endl;
    cout<<endl;
    if ((n>=1)&&(n<=2000))
    {
        for (int i=1; i<=n; i++)
        {
            cout<<"***CASE "<<i<<"***"<<endl;
            cout<<"---------------"<<endl;
            cout<<"Enter the total number of floors in the building: "<<endl;
            cin>>f;
            cout<<endl;
            cout<<"Enter the total number of elevators: "<<endl;
            cin>>e;
            cout<<endl;
            cout<<"Enter the floor from which furniture has to be moved: "<<endl;
            cin>>a;
            cout<<endl;
            cout<<"Enter the floor to which furniture has to be moved: "<<endl;
            cin>>b;
            cout<<endl;

            if ((((a>=0)&&(a<f))&&((b>=0)&&(b<f)))&&((f>=1)&&(f<50000000)))
            {
                if ((e>0)&&(e<100))
                {
                    for (int j=1; j<=e; j++)
                    {
                        cout<<"Enter starting floor of a lift: "<<endl;
                        cin>>y;
                        cout<<endl;
                        cout<<"Enter the gap of floors of a lift after which it will stop: "<<endl;
                        cin>>x;
                        cout<<endl;
                    }
                    for (int j=1; j<=e; j++)
                    {
                        if((x>0)&&(y>=0))
                        {
                            cout<<x<<" "<<y<<endl;
                        }
                    }
                }
            }
            
            cout<<"Total floors in building: "<<f<<endl;
            cout<<"Total number of elevators: "<<e<<endl;
            cout<<"The furniture is wanted to be moved from "<<a<<" floor to "<<b<<" floor."<<endl;
        }
    }
    else
    {
        cout<<"pls enter number of cases from 1 to 2000"<<endl;
    }
    return 0;
}