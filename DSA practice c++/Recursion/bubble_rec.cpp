#include<iostream>
using namespace std;

void bubblesortrec(int arr[],int n)
{
    if(n==1) //BAse case if only one element left return
    {
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesortrec(arr,n-1);
    
}

int main()
{
    int arr[] = {8,9,54,4,2,3};
    int n= sizeof(arr)/sizeof(int);
    bubblesortrec(arr,n);
    for (int i = 0; i < n; i++)
    {
     cout<<arr[i]<<",";
    }
    
}