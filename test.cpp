#include<iostream>
using namespace std;

int main()
{

    int arr[10],size,element,i;
    cout<<"Enter the Size of the array"<<"\n";
   
    cin>>size;
    
     cout<<"Enter the Element number you deleting"<<"\n";
     cin>>element;
     cout<<"Enter the Elements of the array"<<"\n";
     

     for (int i = 0; i < size; i++)
     {
         cin>>arr[i];
     }

     /*5if(arr[i]==element)
     {
         arr[i] = arr[i-1];
     }
     size = size - 1;*/

     cout<<"Resulted array is:"<<"\n";
     for (int i = 0; i < size; i++)
     {
         cout<<arr[i]<<"\n";
     }
}