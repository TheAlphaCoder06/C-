#include <bits/stdc++.h>

using namespace std;

//Base Class
class Parent
{
    protected:
        int id_protected;
};

//Derived Class
class Child: public Parent{
    public:
        void setID(int id)
        {
            id_protected = id;
        }
        void displayID()
        {
            cout<<"id_protected is: "<<id_protected;
        }
};

int main()
{

    Child obj;

    //member function of derived class can accesss the protected data member of the base class

    obj.setID(81);
    obj.displayID();

    return 0;
}