#include<iostream>

using namespace std;

int m,k;

int main(){
	cin>>m>>k;
	for (int i=1;i<=m;i++){
		if (i == k) continue;
		cout<<i<<' ';
	}
	
	return 0;
}
