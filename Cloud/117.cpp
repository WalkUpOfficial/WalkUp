#include<iostream>

using namespace std;

int problems, a, b;
string answer = "Luogu";

int main() {
	cin >> problems;
	a = problems*5;
	b = 11 + problems*3;
	if (b > a) answer = "Local";
	cout<<answer;

	return 0;
}
