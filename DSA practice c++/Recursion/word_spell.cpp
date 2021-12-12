#include<iostream>
using namespace std;

string spell[] = {"zero","one","two","three","four","five"};

void function(int n){
    if(n==0)
    {
        return;
    }
    int last_digit = n % 10;
    function(n/10);
    cout<<spell[last_digit]<<" ";
}

int main(){
    int n;
    cin>>n;
    function(n);
}