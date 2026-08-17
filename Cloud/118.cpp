#include<iostream>

using namespace std;

int c=0, answer=0, temp;

int main(){
	for (int i=0;i<3;i++){
		cin>>temp;
		if (temp < 60) c++;
	}
	if (c == 1) answer = 1;
	cout<<answer;
	
	return 0;
}
