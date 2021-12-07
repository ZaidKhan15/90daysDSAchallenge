#include<iostream>
using namespace std;

int converttoBin(int n){
        int ans = 0;
        int power = 1;
        while (n>0)
        {
            int lastbit = (n&1);
            ans = lastbit;
            ans = ans * power;

             power = power * 10;
             n = n>>1;
   
        }
       
   return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<converttoBin(n)<<endl;
}