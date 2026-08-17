#include<iostream>

using namespace std;

string answer = "Walk";
int S;

int main(){
	cin>>S;
	if (1 < S && S <= 5) answer = "Bike";
	else if (S > 5) answer = "Bus";
	cout<<answer;
	
	return 0;
}
