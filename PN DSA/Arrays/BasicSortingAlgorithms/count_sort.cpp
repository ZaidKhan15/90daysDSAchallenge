#include<iostream>
#include<vector>
using namespace std;

count_sort(int arr[],int n)
{
    //first step is to find the laregst element in array
    
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest,arr[i]);
    }
    
    //Now creating the Count array
    
    vector<int> Count(largest+1,0);
   
   //updating the Count array
    for (int i = 0; i < n; i++)
    {
            Count[arr[i]]++;   
    }
    
    //put back the elements from count into original array
   int j = 0;
   for (int i = 0; i <= largest; i++)
   {
       while (Count[i] > 0)
       {
           arr[j] = i;
           Count[i]--;
           j++; 
       }

   }
    
}

int main()
{
    int arr[] = {6,5,2,4,8,9,1,3};
    int n = sizeof(arr)/sizeof(int);

    count_sort(arr,n);
   
    for(auto x: arr)
    {
        cout<<x<<",";
    }
cout<<endl;
  return 0;
}