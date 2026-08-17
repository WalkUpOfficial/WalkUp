#include<iostream>

using namespace std;

int m, n;
char q;

int main() {
	cin >> m >> n >> q;
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << ' ';
		cout << q;
	}
	cout << endl;

	for (int i = 0; i < m - 2; i++) {
		cout << q;
		for (int j = 0; j < n - 2; j++) {
			cout << " " << ' ';
		}
		if (n > 1) cout << " " << q;
		cout << endl;
	}

	if (m > 1) {
		for (int i = 0; i < n; i++) {
			if (i > 0) cout << ' ';
			cout << q;
		}
		cout << endl;
	}

	return 0;
}
