#include <iostream>

using namespace std;

int main() {
	int start, end;
	cin >> start >> end;
	int sum = 0;
	for (int i = start + 1; i < end; ++i) {
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
			sum += i;
		}
	}

	cout << sum << endl;

	return 0;
}
