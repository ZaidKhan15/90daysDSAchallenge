#include<iostream>
using namespace std;

void print(int arr[][10],int n,int m)
{

//4 variables
int startRow = 0;
int endRow = n - 1;
int startcol = 0;
int endcol = m - 1;


while (startcol<=endcol and startRow<=endRow)
{
    //Start row
    for(int col = startcol; col <= endcol; col++)
    {
        cout<<arr[startRow][col]<<" "; 
    }
    //End col
    for (int row = startRow + 1; row <= endRow; row++)
    {
        cout<<arr[row][endcol]<<" ";
    }
    //end row
    for (int col = endcol - 1; col >= startcol; col--)
    {
        /* avoid duplicate printing */
        if (startRow==endRow)
        {
            break;
        }
        
        cout<<arr[endRow][col]<<" ";
    }
    //start col
    for (int row = endRow - 1; row >= startRow + 1; row--)
    {
        /* avoid duplicate printing of elements */
        if (startcol == endcol)
        {
            break;
        }
        
        cout<<arr[row][startcol]<<" ";
    }
    startcol++;
    endcol--;
    startRow++;
    endRow--;
}


}


int main()
{
//PRINT IN SPIRAL FORM
    int arr[][10] = {
        {1,2,3,4},
        {12,13,14,5},
        {11,16,15,6},
        {10,9,8,7}
    };
int n = 4,m = 4;

print(arr,n,m);



return 0;

}