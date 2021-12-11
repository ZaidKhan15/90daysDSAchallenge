#include<iostream>
using namespace std;

int fastpower(int a,int n){
    if (n==0)
    {
        return 1;
    }
    int subsqr = fastpower(a,n/2);
    int subsquare = subsqr*subsqr;
    if (n&1)
    {
        return a*subsquare;
    }
    return subsquare;
    
}

 int main(){
     int a,n;
     cin>>a>>n;

     cout<<fastpower(a,n);
 }