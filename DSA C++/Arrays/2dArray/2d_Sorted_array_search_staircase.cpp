//Three Approaches that can be done 
/* 1.Brute force i.e iterator over each row or column to find the key O(m*n)
   2.Binary search can be done over row because they are sorted but columns ae also sorted so we need t think of another approach still time complexity O(log n)
   3.Staircase Search which is a great approach as it wil use both sored row and columns adn will give linear time complexity */

#include <iostream>
using namespace std;

pair<int, int> StaircaseSearch(int arr[][4], int n, int m, int key)
{
    //If element is not pesent in the array then return -1,-1
    if(key < arr[0][0] or key > arr[m-1][n-1])
    {
        return {-1,-1};
    }
    //Staircase search

    int i = 0;
    int j = m-1;

    while ( i < n and  j >= 0)
    {
        if(arr[i][j]==key)
        {
            return {i,j};
        }
        else if (arr[i][j]<key)
        {
           j--;
        }
        else{
            i++;
        }
        
    }
    

return {-1,-1};

}

int main()
{

    int arr[][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};
    int n = 4, m = 4;

   pair<int,int> points = StaircaseSearch(arr,n,m,33);
   cout<<points.first<<" "<<points.second<<endl;


    return 0;
}