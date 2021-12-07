#include<iostream>
using namespace std;

int count_bit(int n){
    int count = 0;
    while (n>0)
    {
        int last_bit = (n&1);
        count += last_bit;

          n = n>>1;
    }
    return count;
}

int count_bits_hack(int n){
    int ans = 0;
    while(n>0){
     n = n & (n-1);
     ans++;
}
return ans;
}

int main(){
  int n; 
  cin>>n;

 cout<<count_bit(n)<<endl;
 cout<<count_bits_hack(n)<<endl;

}