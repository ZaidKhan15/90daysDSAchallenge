#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {2,3,5,6,4};
    int ub = 5;

    int i,temp;

    for (int i = 0; i < (ub/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[(ub-1)-i];
        arr[(ub-1)-i] = temp;

    }

    for (int i = 0; i < ub; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
     
}