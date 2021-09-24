#include<iostream>
using namespace std;

//Print all pair of element ( 2 Nested Loop )
//pairing in a unique way 
//if we use j =0 then it will print pair repeating itself with the next itertion
//you can check if you want !!
void printAllpairs(int arr[],int n)
{
   for (int i = 0; i < n; i++)
   {
       int x = arr[i];
         
         for (int j = i+1; j < n; j++)
         {
             int y = arr[j];

             cout<<x<<","<<y<<endl;
         }
         cout<<endl;

   }
   
}


int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
   
    printAllpairs(arr,n);

    
    return 0;
}