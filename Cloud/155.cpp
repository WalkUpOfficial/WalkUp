#include<iostream>

using namespace std;

int m;

int main() {
	cin >> m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 || i == m - 1 || i + j == m - 1) {
				cout << '+';
			} else {
				cout << '-';
			}
		}
		cout << endl;
	}
	return 0;
}
