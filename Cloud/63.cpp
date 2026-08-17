#include<iostream>

using namespace std;

int main(){
	int n,c=0, temp;
	cin>>n;
	for (int i=0;i < n;i++){
		cin>>temp;
		if (temp >= 85) c++;
	}
	
	return 0;
}
