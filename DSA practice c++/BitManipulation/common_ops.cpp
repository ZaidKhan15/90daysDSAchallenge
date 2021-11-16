//Program to get the ith bit


#include<bits/stdc++.h>
using namespace std;

int getIthBit(int x,int index)
{
    int mask = (1<<index);  

    return(x & mask)>0?1:0;
}

void setIthBit(int &x,int index){

    int mask = (1<<index);
    x = x | mask;
}

void ClearIthBit(int &x, int index){
 
 int mask = ~(1<<index);
 x = x & mask;
}


void UpdateIthBit(int &x,int index,int value)  //value =00000000 /00001000 according to x
   {
       ClearIthBit(x,index);
       int mask = (value<<index);
        x = x | mask;
   }

int main()
{
    int x = 13;
    int index;
    cin>>index;

    UpdateIthBit(x,index,1);

  //  ClearIthBit(x,index);
    cout<<x;
}