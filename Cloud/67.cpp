#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double m,d;
	cin>>m>>d;
	cout<<fixed<<setprecision(2)<<m-(d/10);
	
	return 0;
}
