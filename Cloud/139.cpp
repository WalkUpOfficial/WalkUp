#include<iostream>

using namespace std;

int main(){
	int prices[3]={2 ,5, 3}, cost[3]={0}, total_cost, q;
	for (int i=0;i<3;i++) cin>>cost[i];
	cin>>q;
	for (int i=0;i<3;i++) total_cost += prices[i]*cost[i];
	if (total_cost >= q) cout<<"No"<<endl<<total_cost - q;
	else cout<<"Yes"<<endl<<q - total_cost;

	return 0;

}
