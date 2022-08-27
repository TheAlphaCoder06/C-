#include <iostream>

using namespace std;

int main(){

    int arr[] = {10,20,30,40};
    int arr1[5]={10,20};
    int arr2[] {10,20,30};
    int x{10};
    cout<<sizeof(arr);
    cout<<"\n"; 
    cout<<sizeof(arr1);
    cout<<"\n"; 
    cout<<sizeof(arr2);
    cout<<"\n"; 
    cout<<sizeof(x);

    return 0;
}