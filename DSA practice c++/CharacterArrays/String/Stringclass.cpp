#include<bits/stdc++.h>
using namespace std;

//storing the string and then printing it
int main()
{


    string s;
    
    int n = 5;
    vector<string> sarr;
    string temp;

    while(n--)
    {
        getline(cin,temp);
        sarr.push_back(temp);
    }
   
    for(string x : sarr)
    {
        cout<<x<<","<<endl;
    }

}