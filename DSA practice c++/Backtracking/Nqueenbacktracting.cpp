#include<iostream>
#include<vector>
using namespace std;

bool boardIsSafe(int board[][20],int n,int x,int y)
{
    //checking the column
    for (int k = 0; k < x; k++)
    {
         if (board[k][y]==1)
         {
             return false;
         }
         
    }
    //checking the left diagonal
    int i = x;
    int j = y;
    while (i>=0 and j>=0)
    {
        /* code */
        if (board[i][j]==1)
        {
            /* code */
            return false;
        }
        i--,j--;
    }
    //checking right diagonal
    while (i>=0 and j<n)
    {
        /* code */
        if (board[i][j]==1)
        {
            /* code */
            return false;
        }
        i--,j++;
    }
    
    return true;
}
void printArray(int n,int board[][20]){
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool solveNqueen(int n,int board[][20],int i){

    //base case
    if(i==n){
        printArray(n,board);
        return true;
    }
    //rec case
    for (int j = 0; j < n; j++)
    {
        /* code */
        if(boardIsSafe(board,n,i,j)){
            board[i][j]=1;
            bool success = solveNqueen(n,board,i+1);
            if(success){
                return true;
            }
            //backtracking
            board[i][j]=0;

        }
      
    }
      return false;
}


int main(){
  int board[20][20] = {0};
  int n;
  cin>>n;

  solveNqueen(n,board,0);


  return 0;
}