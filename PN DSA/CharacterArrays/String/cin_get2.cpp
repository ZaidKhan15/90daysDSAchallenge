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
         
        meet[len++] = temp;//Strong the array and then printing it as cin.get tke input from buffer so the word after pressing enter do not repeat
         

         //updating the value of temp 
         temp = cin.get();
     }
     meet[len] = '\0'; //getting garbage value at last if comment this
     cout<<"Length is :"<<len<<endl;
     cout<<meet<<endl;

}