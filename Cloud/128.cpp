#include<iostream>

using namespace std;

int a,b,sum=0;

int main(){
	cin>>a>>b;
	for (int i=a;i<=b;i++) if (i % 17 == 0) sum += i;
	cout<<sum;
	
	return 0;
}
