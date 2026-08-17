#include<iostream>

using namespace std;

int main(){
	int n, temp, mint=1000;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>temp;
		if (temp < mint) mint = temp;
	}
	cout<<mint;
	
	return 0;
}
