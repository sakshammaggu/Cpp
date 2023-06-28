/*
Make a class named Fruit with a data member to calculate the number of fruits in a basket.
Create two other class named Apples and Mangoes to calculate the number of apples and mangoes
in the basket. Print the number of fruits of each type and the total number of fruits in the basket.
*/
#include<iostream>
using namespace std;
class fruit
{
    protected:
    int num_apples, num_mangoes, num_fruit;
    public:
    int total_fruit(int num_fruit)
    {
        return num_fruit;
    }
    void print_total_fruit()
    {
        cout<<"The total number of fruits: "<<total_fruit(num_fruit)<<endl;
    }
};
class apples: public fruit
{
    public:
    int total_apples(int num_apples)
    {
        return num_apples;
    }
    void print_total_apples()
    {
        cout<<"The total number of apples: "<<total_apples(num_apples)<<endl;
    }
};
class mangoes: public fruit
{
    public:
    int total_mangoes(int num_mangoes)
    {
        return num_mangoes;
    }
    void print_total_mangoes()
    {
        cout<<"The total number of mangoes: "<<total_mangoes(num_mangoes)<<endl;
    }
};
class inherit: public fruit, public apples, public mangoes
{
    public:
    void print()
    {
        cout<<"This is inherited class."<<endl;
    }
};
int main()
{
    int total_m, total_a, total_f;
    cout<<"Enter total apples: "<<endl;
    cin>>total_a;
    cout<<"Enter total mangoes: "<<endl;
    cin>>total_m;
    total_f=total_a+total_m;
    fruit obj1;
    inherit obj;
    obj.print();
    obj.total_apples(total_a);
    obj.total_mangoes(total_m);
    obj1.total_fruit(total_f);
    cout<<endl;
    obj.print_total_apples();
    obj.print_total_mangoes();
    obj1.print_total_fruit();
}