// Constructor chaining/delegation is the process of re-using constructors by others to avoid writing repeated code. This is done by calling one constructor to set common values by other constructors

#include <bits/stdc++.h>

using namespace std;

class Employee
{
    public:
    string id, name;
    int experience;
        Employee(string id):id(id){}

        Employee(string id, string name): Employee(id){this->name = name;}

        Employee(string id, string name, int experience): Employee(id, name){this-> experience = experience;}

        void getDetails()
        {
            cout<<"ID: "<<id<<", Name: "<<name<<", Experience: "<<experience<<"\n";
        }
};

int main()
{
    Employee emp("GitHub", "Sunny", 4);

    emp.getDetails();

    return 0;
}