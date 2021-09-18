#include<iostream>
#include <cstring>
using namespace std;
	

int main(){

	char a[1000] = "apple";
	char b[1000];

	//Calc Length 
//	cout<< strlen(a) <<endl;

	//Strcpy 
//	strcpy(b,a);
//	cout << b <<endl;



	//Compare 
//	cout << strcmp(a,b) <<endl;
	//strcmp
	
	char web[] = "www.";
	char domain[] = "codingminutes.com";

	cout<<strcat(web,domain);

	strcpy(b,strcat(web,domain));
	cout<<b<<endl; 

	cout<<strcmp(b,a)<<endl;



	return 0;
}