#include <bits/stdc++.h>

using namespace std;

class Circle
{
    public:
        double radius;

        double compute_area()
        {
            return (3.14*radius*radius);
        }
};

int main()
{

    Circle obj;

    // Accessing public data member
    // The public members of a class can be accessed from anywhere in the program using the direct member access operator(.)
    obj.radius = 5.5;               

    cout<<"Radius of the circle is: "<<obj.radius<<"\n";
    cout<<"Area of the circle is: "<<obj.compute_area();

    return 0;
}