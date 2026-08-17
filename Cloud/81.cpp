#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int n;
	double sum=0,temp;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>temp;
		sum += temp;
	}
	cout<<fixed<<setprecision(4)<<sum/n;
	
	return 0;
}
