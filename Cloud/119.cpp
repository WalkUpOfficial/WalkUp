#include<iostream>

using namespace std;

int a,b,c,answer=0;

int main(){
	cin>>a>>b>>c;
	if (a+b>c && a+c>b && b+c>a) answer = 1;
	cout<<answer;
	
	return 0;
}
