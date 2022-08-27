// A Constructor is a member function of a class that initializes objests of a class.
//In C++, Constructor is automatically called when an object is created.
//It is a special member function of the class.

//A constructor differs from member-function in the following ways:
    // Constructor has the same name as the Class itself.
    // Constructor don't have a return type.
    // A constructor is automatically called when an object is created.
    // If we do not specify a constructor, C++ compiler generates a defauld constructor for us(which expects no paremeters and has an empy body).

#include <bits/stdc++.h>

using namespace std;

class Employee
{
    public:
        string id, name;
        int yrs;

};

int main()
{
    Employee emp;

    return 0;
}

// In the above code, once the object is created, the default constructor is called. We can overload the default constructor.
// Refer to "constructor_overloading.cpp"