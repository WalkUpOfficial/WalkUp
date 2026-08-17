#include<bits/stdc++.h>

using namespace std;

int main(){
	int number1,number2;
	cin>>number1>>number2;
	if (number1==number2){
		cout<<'=';
	}else if(number1>number2){
		cout<<'>';
	}else{
		cout<<'<';
	}
	
	return 0;
}
