#include<iostream>
using namespace std;

selection_sort(int arr[],int n)
{
    for(int pos = 0; pos <= n-2;pos++)
    {
        int current = arr[pos];
        int min_element = pos;
         //find out the minimum element
        for (int i = pos; i < n; i++)
        {
           if (arr[i] < arr[min_element])
           {
               min_element = i;
           }
           
        }
        swap(arr[min_element],arr[pos]);
    }
}

int main()
{
    int arr[] = {-2,3,4,-1,-12,6,3,8};
    int n = sizeof(arr)/sizeof(int);

    selection_sort(arr,n);

    for(auto x: arr)
    {
        cout<<x<<",";
    }

    return 0;
}