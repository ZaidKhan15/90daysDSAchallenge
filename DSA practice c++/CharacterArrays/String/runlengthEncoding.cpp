#include<bits/stdc++.h>
using namespace std;


//run length encoding for string compression
//if compressed string is bigger than original than return orignal string
//input: aaabbccddee
//output: a3b2c2d2e2

string compressedString(string str)

{
    //a = "test" and b = "ttew"


    int n = str.length();
   
    string output;
    
    for(int i = 0; i<n;i++)
{
     int count = 1;

     while (i < n-1 and str[i+1] == str[i])
     {
         /* code */
         count++;
         i++;
     }
     output += str[i];
     output += to_string(count);
     
}
   if (output.length() > str.length())
   {
       return str;
   }
   
 return output;


}




int main()
{



string s1 = "aaabbccddee";
cout<<compressedString(s1)<<endl;
string s2 = "abcd";
cout<<compressedString(s2)<<endl;



    return 0;
}