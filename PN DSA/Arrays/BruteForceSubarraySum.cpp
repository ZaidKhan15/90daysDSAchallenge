//FIND THE LARGEST SUM OF SUBARRAY AND I MYSELF GIVING
//TASK TO ME TO PRINT THAT SUBARRAY WHICH HAS THE LARGEST SUM

//Brute force O(N^3)

#include<iostream>
using namespace std;

int printSubarray(int arr[],int n)
{

   int largestSum = 0;

    for (int i = 0; i < n; i++)
    {
         for (int j = i; j < n; j++)
        {
          int subarraySum = 0; 
        for (int k = i; k <= j; k++)
            {
               //cout<<arr[k]<<",";
               subarraySum += arr[k];
            }
        //put a check if subarray sum > largest sum(largest till now)
        //brute force
         largestSum = max(largestSum,subarraySum);

        }
        
    }
 return largestSum;   
 

}



int main()
{
   int arr[] = {-2,3,4,-1,5,-12,6,1,3};

   int n = sizeof(arr)/sizeof(int);

  


cout<<printSubarray(arr,n)<<endl;
   
   
   
    return 0;
}