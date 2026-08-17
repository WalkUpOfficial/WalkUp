#include<iostream>

using namespace std;

int main(){
	int a,b;
	string c;
	cin>>a>>b>>c;
	if (c == "+") cout<<a+b;
	else if (c == "-") cout<<a-b;
	else if (c == "*") cout<<a*b;
	else if(c == "/"){
		if (b == 0) cout<<"Divided by zero!";
		else{
			cout<<a*1.0/b;
		}
	}else cout<<"Invalid operator!";
	
	return 0;
}
