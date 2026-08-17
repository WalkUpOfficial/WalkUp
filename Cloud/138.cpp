#include<iostream>
#include<iomanip>

using namespace std;

double k,c,f;

int main(){
	cin>>k;
	if (k <= 212){
		c = k - 273.15;
		f = c * 1.8 + 32;
		cout<<fixed<<setprecision(2)<<c<<' '<<fixed<<setprecision(2)<<f;
	}
	
	return 0;
}
