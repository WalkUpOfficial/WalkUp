#include<iostream>

using namespace std;

long long a;

int main(){
	cin>>a;
	cout<<2<<endl;
	for (int i=2;i<=a;i++) if (i % 2 == 1) cout<<i<<endl;
	
	return 0;
}
