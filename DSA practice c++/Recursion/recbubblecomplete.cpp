#include<iostream>
using namespace std;

void bubblesortrec(int arr[],int n,int i)
{
    if(n==1) //BAse case if only one element left return
    {
        return;
    }
    if(i==n-1)
    {
        bubblesortrec(arr,n-1,0);
        return;
    }
    if(arr[i]>arr[i+1])
    {
            swap(arr[i],arr[i+1]);
    }
    bubblesortrec(arr,n,i+1);   
}

int main()
{
    int arr[] = {8,9,54,4,2,3};
    int n= sizeof(arr)/sizeof(int);
    int i=0;
    bubblesortrec(arr,n,i);
    for (int i = 0; i < n; i++)
    {
     cout<<arr[i]<<",";
    }
    
}