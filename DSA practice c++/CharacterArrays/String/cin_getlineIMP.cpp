//We will use it when we need to store long input say paragarph or something

#include<iostream>
using namespace std;

int main()
{
  char Sentence[1000];

  cin.getline(Sentence,1000,'#'); //Modification of cin.get()

  cout<<Sentence<<endl;


}