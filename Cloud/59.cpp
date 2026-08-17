#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int n,sum=0;
	cin>>n;
	for (int i=0;i < n;i++){
		int temp;
		cin>>temp;
		sum += temp;
	}
	cout<<fixed<<setprecision(2)<<sum*1.0/n;
	
	return 0;
}
