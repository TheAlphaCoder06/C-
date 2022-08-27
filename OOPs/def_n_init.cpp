#include <bits/stdc++.h>

using namespace std;

class Employee{

    public:
        string id, name;
        int yrs;

        Employee(string id, string name, int years)
        {
            this->id = id;
            this->name = name;
            this->yrs = years;
        }
        void work()
        {
            cout<<"Employe: " << this->id <<" is working\n";
        }
};

int main()
{

    // Direct Initialization of class
    Employee emp("GitHub", "Sunny", 5);

    // Indirect Initialization of class
    Employee *emp_ptr = new Employee("GitHub", "Sunny", 5);

    cout<<"Employee ID: "<<emp.id<<endl;
    cout<<"Name: "<<emp.name<<endl;
    cout<<"Experience(in yrs): "<<emp.yrs<<endl;

    emp.work();
    cout<<endl;

    cout<<"Employee ID: "<<emp_ptr->id<<endl;
    cout<<"Name: "<<emp_ptr->name<<endl;
    cout<<"Experience(in yrs): "<<emp_ptr->yrs<<endl;

    emp_ptr->work();

    return 0;
}