#include<iostream>

using namespace std;

int a,sum=0;

int main(){
	cin>>a;
	for (int i=2;i<=a;i+=2) sum += i;
	cout<<sum;

	return 0;
}
