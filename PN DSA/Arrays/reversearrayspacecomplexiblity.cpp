#include<iostream>
using namespace std;

//using swaping function 
//time complexiblity O(N) at while N/2 but we neglt constant i.e.2
//so time complexity O(N) and space complexity O(1) as memeory management is good
 void reverseArray(int arr[],int n)
{
   int s = 0;
   int e = n-1;
 
   while (s < e)
   {
       swap(arr[s],arr[e]);
       s = s + 1;
       e = e - 1;
   }
   
}

int main()
{
   int arr[] = {1,3,4,6,9,8};

   int n = sizeof(arr)/sizeof(int);

    reverseArray(arr,n);

   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   
    return 0;
}