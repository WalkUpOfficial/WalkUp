#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int n;
	cin>>n;
	double sum=0,temp;
	for (int i=0;i<n;i++){
		cin>>temp;
		sum+=temp;
	}
	cout<<fixed<<setprecision(2)<<sum/n;
	
	
	return 0;
}
