#include<iostream>

using namespace std;

int a;

int main() {
	cin >> a;
	for (int x = 1; x <= 5; x++) {
		int result = 1;
		for (int j = 1; j <= x; j++) {
			result *= a;
		}
		cout << a << '^' << x << '=' << result << endl;
	}

	return 0;
}
