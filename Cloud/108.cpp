#include<iostream>

using namespace std;

int a,b,total_cost=10;

int main(){
	cin>>a>>b;
	if (a > 5) total_cost += 5;
	if (b == 1) total_cost += 10;
	cout<<total_cost;
	
	return 0;
}
