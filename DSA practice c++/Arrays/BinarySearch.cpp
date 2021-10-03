//Note:
//Element should be sorted
//Timecomplexiblity O(LOG chota2 (N))
#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
    int s = 0;
    int e = n -1;
   while (s<=e)
   {
       int mid = (s+e)/2;

       if (arr[mid] == key)
       {
           cout<<"Element is found at index :";

          return mid;

          //cout<<"The element is at position in :"<<mid<<"\n";
       }
       else if (arr[mid]>key)
       {
           e = mid - 1;
       }
       else{
           s = mid + 1;
       }
       
   }
  
}



int main()
{
    int n;
    cout<<"Enter the Size of the Array"<<"\n";
    cin>>n;

    int key;
    cout<<"Enter the Key to be searched in the Array"<<"\n";
    cin>>key;


    int arr[n];
    cout<<"Enter the Elements of the Array"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
     cout<<BinarySearch(arr,n,key)<<endl;
   

   
     for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<"\n";
  }

    return 0;
}
