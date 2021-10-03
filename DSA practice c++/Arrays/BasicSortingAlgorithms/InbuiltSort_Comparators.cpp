#include<iostream>
#include<algorithm>
using namespace std;

//TIME COMPLEXITY OF INBUILTSORT IS O(Nlogn)
//We can also comparators to print the array in assending or decending order
//comparetor are passed in sort and in sort function it is calling compare function multipe times

bool compare(int a,int b)
{
    return a < b;
    //return a > b;
}
//WE CAN ALSO USE DIRECTLY greater<int>() to print in reverse order without creating comparators
//and passing it in the position of compare in sort function
int main()
{
    int arr[] = {2,3,8,7,4,6,1,-2,-1,-5};
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr+n,compare);

    //printing
    for(int x: arr)
    {
        cout<<x<<",";
    }
    return 0;
}