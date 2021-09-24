#include<iostream>
using namespace std;

int main(){

    int a[100] = {2,3,6,9,7};
    int pos = 4;
    int num = 10;
    //cin>>pos>>num;

    for(int i = 4; i >= pos; i--)
    {
        a[i+1]= a[i];
        
    }
    a[pos] = num;
    for(int i = 0; i < 6; i++)
    {
      //  cout<<"The resulted array after insertion is";
        cout<<a[i]<<"\n";
    }

}