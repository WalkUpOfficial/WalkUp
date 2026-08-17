#include<iostream>

using namespace std;

int main(){
	int n,l,r,c=0,temp;
	cin>>n>>l>>r;
	for (int i=0;i<n;i++){
		cin>>temp;
		if (l<=temp && temp <= r){
			c++;
		}
	}
	cout<<c;
	
	return 0;
}
