//Program to get the ith bit


#include<bits/stdc++.h>
using namespace std;

int getIthBit(int x,int index)
{
    int mask = (1<<index);  

    return(x & mask)>0?1:0;
}

void setIthBit(int x,int index){

    int mask = (1<<index);
    x = x | mask;
}

void ClearIthBit(int x, int index){
 
 int mask = ~(1<<index);
 x = x & mask;
}

int main()
{
    int x = 5;
    int index;
    cin>>index;

    cout<<getIthBit(x,index)<<endl;

    ClearIthBit(x,index);
    cout<<x;
}