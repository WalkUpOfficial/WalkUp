#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	string a;
	int b;
	double c,d;
	cin>>a>>b>>c>>d;
	cout<<a<<' '<<b<<' '<<fixed<<setprecision(6)<<c<<' '<<d;
	
	return 0;
}
