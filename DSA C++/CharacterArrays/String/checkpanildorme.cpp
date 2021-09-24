#include<bits/stdc++.h>
using namespace std;


string isPanildrome(string str)
{
    int l = 0;
    int h = str.length() - 1;

    while(h > l)
    {
        if(str[l++] != str[h--])
        {
            return "no";
        }
    }
    return "yes";
}

int main()
{
    string str = "HELLO";
    cout<<isPanildrome(str);
     

    
    return 0;
}