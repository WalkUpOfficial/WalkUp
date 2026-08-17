#include<iostream>

using namespace std;

int a,sum=0;

int main(){
	cin>>a;
	for (int i=1;i<=a;i++) sum += i;
	cout<<sum;
	
	return 0;
}
