#include <bits/stdc++.h>

using namespace std;

class Circle
{
    private:
        double radius;

    public:
        int getRadius(){return radius;}
        void setRadius(double r){radius = r;}
        double compute_area()
        {
            //member function can access private data member
            return (3.14*radius*radius);
        }
};

int main()
{
    Circle obj;

    //obj.radius = 1.5;  
    //This will show error because radius is a private data member 
    //!But we can access it using public member functions of the class

    obj.setRadius(5);

    cout<<"Radius of the circle is:"<<obj.getRadius()<<"\n";
    cout<<"Area of the circle is: "<<obj.compute_area();

    return 0;
}