#include<iostream>

using namespace std;

int main(){
	char a;
	string result = "YES";
	cin.get(a);
	if (a % 2 == 0) result = "NO";
	cout<<result;
	
	return 0;
}
