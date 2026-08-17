#include<iostream>
#include <iomanip>

using namespace std;

int main(){
	double a,b,s;
	cin>>a>>b;
	s = b/a*100;
	if (int(s)!=s && s != 0){
		cout<<fixed<<setprecision(3)<<b/a*100<<'%';
	}else{
		cout<<b/a*100<<".000"<<'%';
	}
	
	return 0;
}
