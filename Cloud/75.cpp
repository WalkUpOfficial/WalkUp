#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double s=0, p[10]{28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
	int temp;
	for (int i=0;i<10;i++){
		cin>>temp;
		s += temp*p[i];
	}
	cout<<fixed<<setprecision(1)<<s;
	
	return 0;
}
