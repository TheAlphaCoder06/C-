#include <bits/stdc++.h>

using namespace std;

class Employee
{
    public:
        string id, name;
        int yrs;

        Employee()
        {
            id = "";
            name = "";
            yrs = 0;
        }

        // Overloaded Constructor
        Employee(string id, string name, int yrs)
        {
            this->id = id;
            this->name = name;
            this->yrs = yrs;
        }

        // Overloaded Constructor
        Employee(string id, string name)
        {
            this->id = id;
            this->name = name;
            yrs = 0;
        }
        void getDetails()
        {
            cout<<"ID: "<<id<<" Name: "<<name<<" yrs: "<<yrs<<endl;
        }
};

int main()
{

    Employee emp;
    Employee emp2("GitHub", "Sunny", 5);
    Employee fresher("Github", "Sunny");

    emp.getDetails();
    emp2.getDetails();
    fresher.getDetails();

    return 0;
}