#include<iostream>
#include<iomanip>

using namespace std;

double a, answer=10.0;

int main(){
	cin>>a;
	if (1 < a && a <= 5) answer = 14.0;
	else if (a > 5) answer = 18.0;
	cout<<fixed<<setprecision(1)<<answer;

	return 0;
}
