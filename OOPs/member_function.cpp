#include <bits/stdc++.h>

using namespace std;

class Employee{
    public:
        string id, name;
        int yrs;

        Employee(string id, string name, int yrs)
        {
            this->id = id;
            this->name = name;
            this->yrs=yrs;
        }
        void work();
};

void Employee::work()
{
    cout<<"Employee: "<<this->id<<" is working"<<endl;
}

int main(){

    Employee emp("GitHub", "Sunny", 4);

    emp.work();
    
    Employee *emp_ptr = new Employee("GitHub", "Sunny", 5);
    emp_ptr->work();

     return 0;
}