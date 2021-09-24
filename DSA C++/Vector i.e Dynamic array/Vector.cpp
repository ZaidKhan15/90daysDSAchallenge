#include<iostream>
#include<vector>
using namespace std;


int main()
{
    
vector<int> arr = {1,2,10,12,15};

//fill constructor
vector<int> arr(10,7);//it will print array of size 10 and each being a 7 element 
vector<int> visited(100,0);

//to delete the last element
arr.pop_back();

 arr.push_back(22);


//print all the elemtns 
for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<endl;
}





//size basically tells you the number of elements
    cout<<arr.size()<<endl;
//capacity basically tells whta is the actual memory allocated 
//it doubles the capacity for ex in array of 5 elements 5 is allocated capacity but if we insert 1 element it will double it capacity
    cout<<arr.capacity()<<endl;
}