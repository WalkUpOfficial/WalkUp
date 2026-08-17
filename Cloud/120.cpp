#include<iostream>

using namespace std;

long long answer=-10000000000, temp;

int main(){
	for (int i=0;i<3;i++){
		cin>>temp;
		if (temp > answer) answer = temp;
	}
	cout<<answer;
	
	return 0;
}
