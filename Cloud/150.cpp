#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int current_sum = 0;
	int i = 1;

	while (current_sum + i <= n) {
		cout << i << endl;
		current_sum += i;
		i++;
	}

	return 0;
}
