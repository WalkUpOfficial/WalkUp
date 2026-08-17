#include<iostream>

using namespace std;

long long a;
string answer="No";

int main(){
	cin>>a;
	for (int i=0;i<=10;i++) if (i*i*i == a) answer = "Yes";
	cout<<answer;
	
	return 0;
}
