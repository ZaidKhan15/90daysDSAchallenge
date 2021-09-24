#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int> arr) {
    int ele = 0;
    int largest  = 0;
    

    
    for(int i = 0; i <arr.size(); i++)
    {
        ele += arr[i];
        
        
        largest = max(largest,ele);
    }
     
     
     
     return largest;
}

int main()
{
    vector<int> arr = {2,3,8,6,5};


    

    cout<<largestElement(arr);
}