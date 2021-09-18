#include<iostream>
using namespace std;

int main()
{
    char meet[100];

    char temp = cin.get();
     
     int len = 0;
     //we can also end at any other symbol too i.e.'#' or something
     //buffer get input when you press enter
     while (temp != '\n')
     {
         
         len++;
         cout<<temp;

         //updating the value of temp 
         temp = cin.get();
     }
     cout<<"Length is :"<<len<<endl;
     

}