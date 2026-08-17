#include<iostream>

using namespace std;

int main(){
	int n,a,b,ac,bc;
	cin>>n;
	for (int i=0;i < n;i++){
		cin>>a>>b;
		if (a > b) ac+=3;
		if (b > a) bc+=3;
		if (a == b) ac++;bc++;
	}
	cout<<ac;
	
	return 0;
}
