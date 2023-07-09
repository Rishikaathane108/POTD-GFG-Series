#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public :
        int age;
        int wt;

        void bark()
        {
            cout<<"Bark "<<endl;
        }
};

class Dog : public Animal
{
    public :
    void dog()
    {
        cout<<"Function Dog "<<endl;
    }
    
};

class Cat : public Animal
{
    public :
    void cat()
    {
        cout<<"Function Cat "<<endl;
    }

};

int main()
{
    cout<<"Animal : ";
    Animal a;
    a.bark();

    cout<<"Dog : ";
    Dog d;
    d.bark();
    d.dog();

    cout<<"Cat : ";
    Cat c;
    c.bark();
    c.cat();
    

    return 0;
}
