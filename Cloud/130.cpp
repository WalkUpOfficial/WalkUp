#include<iostream>

using namespace std;

int a;

int main(){
	cin>>a;
	for (int i=a;i>0;i--) if (i % 2 == 1) cout<<i<<endl;
	
	return 0;
}
