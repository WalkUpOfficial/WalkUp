#include<iostream>

using namespace std;

int main(){
	int n,min_num=2000;
	int temp;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>temp;
		if (temp<min_num) min_num=temp;
	}
	cout<<min_num;
	
	return 0;
}
