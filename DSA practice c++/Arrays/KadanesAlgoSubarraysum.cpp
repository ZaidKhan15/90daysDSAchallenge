#include<iostream>
using namespace std;

//Before seeing the program it is better to hava a look on kadane's Algorithm
//Let’s look at the algorithm :

//Initialize max_so_far = 0
//Initialize max_ending_here = 0
//Repeat steps 4 to 6 for each element of the array
//set max_ending_here = max_ending_here + a[i]
//if(max_ending_here < 0) then set max_ending_here = 0
//if(max_so_far < max_ending_here) then set max_so_far = max_ending_here
//return max_so_far


//*********************************************
//Solve the Maximum subarray problem with O(N)



int max_kadaneSum(int arr[], int n )
{
   int cs = 0;
   int largest = 0;

   for (int  i = 0; i < n; i++)
   {
       cs += arr[i];

       if (cs<0)
       {
           cs = 0;
       }
       largest = max(largest,cs);
   }
   return largest;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
  
   int n = sizeof(arr)/sizeof(int);

   cout<<max_kadaneSum(arr,n)<<endl;

}