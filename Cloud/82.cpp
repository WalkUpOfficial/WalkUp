#include<iostream>
#include<string>

using namespace std;

int main(){
	string T;
	int sum=0;
	cin>>T;
	for (char c:T) if (c=='1') sum+=1;
	cout<<sum;
	
	return 0;
}
