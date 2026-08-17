#include<iostream>

using namespace std;

int a,sum=0;

int main(){
	cin>>a;
	for (int i=1;i<10;i++) sum += a*i;
	cout<<sum;

	return 0;
}
