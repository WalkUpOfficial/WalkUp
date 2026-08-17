#include<iostream>

using namespace std;

int temp,i=0;

int main(){
	while(1){
		i++;
		cin>>temp;
		if (temp == 250){
			cout<<i;
			return 0;
		}
	}
	
	return 0;
}
