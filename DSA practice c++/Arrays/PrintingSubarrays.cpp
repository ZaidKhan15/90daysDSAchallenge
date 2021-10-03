#include<iostream>
using namespace std;
//Sub array continuos small part of array that should be in order
//Subarray is a contiguous part of array, it may or may not contain all elements. Whole array is a subarray of itself also.
void printSubarrays(int * arr, int n)
{
 for (int i = 0; i < n; i++)
 {
     for (int j = i; j < n; j++)
     {
         /* code */
         for (int k=i; k <= j;k++)
         {
             /* code */
             cout<<arr[k]<<",";
         }
         cout<<endl;
     }
     /*QUESTION 
      PRINT THE SUM OF EACH SUBARRAY & FIND OUT THE LARGEST SUM
     */
 }
 
}


int main()
{
   int arr[] = {10,20,30,40,50,60};

   int n = sizeof(arr)/sizeof(int);

printSubarrays(arr,n);



    return 0;
}