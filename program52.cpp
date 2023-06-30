/*
We want to store the information of different vehicles. Create a class named Vehicle with two 
data member named mileage and price. Create its two subclasses *Car with data members to store 
ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).*Bike 
with data members to store the number of cylinders, number of gears, cooling type(air, liquid or 
oil), wheel type(alloys or spokes) and fuel tank size(in inches). Make another two subclasses Audi 
and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj 
and TVS, each having a data member to store the make-type. Now, store and print the information of 
an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, 
mileage and price.) Do the same for a Bajaj and a TVS bike.
*/
#include<iostream>
using namespace std;
class vehicle
{
    protected:
    int mileage, price;
};

class car: public vehicle
{
    protected:
    int ownership_cost, warranty, seating_capacity;
    string fuel_type;

    //getting and setting ownership_cost
    int get_owner_ship_cost()
    {
        return ownership_cost;
    }
    void set_ownership_cost(int ownership_cost)
    {
        this->ownership_cost=ownership_cost;
    }

    //getting and setting warranty
    int get_warranty()
    {
        return warranty;
    }
    void set_warranty(int warranty)
    {
        this->warranty=warranty;
    }

    //getting and setting seating capacity
    int get_seating_capacity()
    {
        return seating_capacity;
    }
    void set_setaing_capacity(int seating_capacity)
    {
        this->seating_capacity=seating_capacity;
    }

    //getting and setting fuel type
    string get_fuel_type()
    {
        return fuel_type;
    }
    void set_fuel_type(string fuel_type)
    {
        this->fuel_type=fuel_type;
    }
};
class audi: public car
{
    public:
    string model_type;
};
class ford: public car
{
    public:
    string model_type;
};

class bike: public vehicle
{
    protected:
    int no_of_cylinders, no_of_gears, fuel_tank_size;
    string cooling_type, wheel_type;
};
class bajaj: public bike
{
    public:
    string make_type;
};
class tvs: public bike
{
    public:
    string model_type;
};
int main()
{

}