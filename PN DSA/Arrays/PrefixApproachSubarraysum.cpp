//FIND THE LARGEST SUM OF SUBARRAY AND I MYSELF GIVING
//TASK TO ME TO PRINT THAT SUBARRAY WHICH HAS THE LARGEST SUM



#include<iostream>
using namespace std;
//prefix sum approach O(N^2)



//largest sum logic
int printSubarray(int arr[],int n)
{


int prefix[100] = {0};
prefix[0] = arr[0];

for (int i = 1; i < n; i++)
{
    prefix[i] = prefix[i-1] + arr[i];
}




   int largestSum = 0;

    for (int i = 0; i < n; i++)
    {
         for (int j = i; j < n; j++)
        {
          
 int subarraySum = i>0 ?prefix[j] - prefix[i-1] : prefix[j];
            
            //i is strating from zero so if i started from zero that mneans 0 to j will do it
            
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
   //prefix[] = {-2,1,5,4,9,-3,3,4,7};

   int n = sizeof(arr)/sizeof(int);

  


cout<<printSubarray(arr,n)<<endl;
   
   
   
    return 0;
}