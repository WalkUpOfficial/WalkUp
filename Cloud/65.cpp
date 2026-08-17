#include<iostream>

using namespace std;

int main(){
	int n,findtext,sum=0,temp;
	cin>>n>>findtext;
	for (int i=0;i<n;i++){
		cin>>temp;
		if (temp%10) sum+=temp;
	}
	cout<<sum;
	
	return 0;
}
