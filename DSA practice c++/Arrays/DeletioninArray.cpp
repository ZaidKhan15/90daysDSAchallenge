#include<iostream>
using namespace std;
int main()
{
    int arr[100] = {2,3,6,5,4};
    int pos = 2;  //means at index = 3 the deletion operation will occcur
    int size = 5;


    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i+1];
    }

    //Traversing the Array now

    for (int  i = 0; i < size - 1; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    
}