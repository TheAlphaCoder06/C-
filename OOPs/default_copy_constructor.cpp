#include <bits/stdc++.h>

using namespace std;

class Array
{
    public:
        int n;
        int* ref;
            Array(int n):n(n){
                ref = new int[n];

                for (int i = 0; i < n; i++)
                {
                    *(ref + i) = i;
                }
                
            }
};

int main()
{
    Array arr1(10);

    Array arr2 = arr1;

    arr2.n = 5;

    for (int i = 0; i < 10; i++)
    {
        *(arr2.ref + i) *= 2;
    }

    cout<<"n-value of first instance: "<<arr1.n<<"\n";

    cout<<"Array value of first instance:\n";
    for (int i = 0; i < 10; i++)
    {
        cout<<*(arr1.ref + i)<<" ";
    }
        

    return 0;
}