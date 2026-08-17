#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double a[10],sum=0,p[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	for (int i=0;i<10;i++) cin>>a[i];
	for (int i=0;i<10;i++) sum+=a[i]*p[i];
	cout<<fixed<<setprecision(1)<<sum;
	
	return 0;
}
