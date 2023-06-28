/*
Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale
which inherits both the above classes. Now, create a function in each of these classes which 
prints "I am mammal", "I am a marine animal" and "I belong to both the categories: 
Mammals as well as Marine Animals" respectively. Now, create an object for each of the above 
class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale
*/
#include<iostream>
using namespace std;
class mammals
{
    public:
    void print_mammals()
    {
        cout<<"I'm mammal"<<endl;
    }
};
class marine_animals
{
    public:
    void print_marine_animal()
    {
        cout<<"I'm a marine animal"<<endl;
    }
};
class bluewhale: public mammals, public marine_animals
{
    public:
    void print_blue_whale()
    {
        cout<<"I'm a blue whale"<<endl;
    }
};
int main()
{
    mammals obj1;
    marine_animals obj2;
    bluewhale obj3;
    obj1.print_mammals();
    obj2.print_marine_animal();
    obj3.print_blue_whale();
    cout<<endl;
    obj3.print_mammals();
    obj3.print_marine_animal();
    obj3.print_blue_whale();
}