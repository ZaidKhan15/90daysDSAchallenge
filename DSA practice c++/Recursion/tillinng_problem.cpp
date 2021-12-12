/*You are given N tiles of size 1 x M. There is a floor of size Nx M which you have to cover with
tiles. Find the number of ways the floor can be completely covered if you can place the tiles in
both horizontal and vertical manner.
*/

#include <iostream>
using namespace std;

int tillingProblem(int n, int m){
     if(n<m) return 1;
	int op1 = tillingProblem(n-1, m);
	int op2 = tillingProblem(n-m, m);
	return (op1 + op2);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<tillingProblem(n,m);
}