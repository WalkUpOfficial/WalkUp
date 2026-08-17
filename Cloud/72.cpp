#include<iostream>

using namespace std;

int main(){
	int n,j=0,o=0;
	cin>>n;
	for (int i=0;i<n;i++){
		int temp;
		cin>>temp;
		if (temp%2==0) o++;
		else j++;
	}
	cout<<j<<' '<<o;
	
	return 0;
}
