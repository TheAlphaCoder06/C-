#include <bits/stdc++.h>

using namespace std;

class Employee
{
    public:
        string id, name;
        int experience;

        Employee(string id, string name, int experience):id(id), name(name), experience(experience)
        {
            // extra code to be executed after initialization
        }
        // does the same as:
        // Employee(string id, string name, int years) {
        // this->id = id;
        // this->name = name;
        // this->years = years;

        //      extra-code to run after initialization

        void getDetails()
        {
            cout<<"ID: "<<id<<", Name: "<<name<<", Experience: "<<experience<<"\n";
        }
};

int main()
{

    Employee emp("GitHub","Sunny",11);

    emp.getDetails();

    return 0;
}