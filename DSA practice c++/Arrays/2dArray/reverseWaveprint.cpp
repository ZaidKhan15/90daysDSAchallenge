#include<bits/stdc++.h>
using namespace std;
 
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    vector<int> res;
    int i, j = n - 1, wave = 1;
 
    while (j >= 0) {
         
        if (wave == 1) {
              
            for (i = 0; i < m; i++)
                res.push_back(arr[i][j]);           
            wave = 0;
            j--;
        }
        else {
             
            for (i = m - 1; i >= 0; i--)
               res.push_back(arr[i][j]) ;            
            wave = 1;
            j--;
        }
    }
return res;
}

int main()
{

   int arr[][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};
    int n = 4, m = 4;

   WavePrint(arr,n,m);
   


    return 0;