#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size, int key)
{

for (int i = 0; i < size; i++)
{
   if (arr[i]==key)
   {
   
      cout<<"The key you searched is on index:"<<"\n";
       return i;
   }
   
}
return -1;

}


int main()
{
   int size;
   cout<<"Enter the size of the array"<<"\n";
   cin>>size;
   
    int arr[100];
     cout<<"Enter the Elements in the array"<<"\n";
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }
    int key;
     cout<<"Enter the Key you want to search in the array"<<"\n";
    cin>>key;

    cout<<LinearSearch(arr,size,key)<<endl;
    
    
}