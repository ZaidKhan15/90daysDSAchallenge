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

void ClearLastIbits(int &x,int index)
{
  int mask = (-1<<index);
  x = x & mask;

}


void UpdateIthBit(int &x,int index,int value)  //value =00000000 /00001000 according to x
   {
       ClearIthBit(x,index);
       int mask = (value<<index);
        x = x | mask;
   }
void clearBitsInRange(int &n,int i,int j){
	int a = (~0)<<(j+1);
	int b = (1<<i) - 1;
	int mask = a|b;
	n = n & mask;
}


int main(){

	int n = 31;
	int i=1;
	int j=3;
	//cin>>i;
	//cout<<getIthBit(n,i) <<endl;
	//setIthBit(n,i);
	//clearIthBit(n,i);
	//updateIthBit(n,i,0);
	//clearLastIBits(n,i);
	clearBitsInRange(n,i,j);
	cout << n <<endl;;

}