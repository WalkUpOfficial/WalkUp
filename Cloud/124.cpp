#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int k, n;
	double price = 0.0;
	cin >> k >> n;
	switch (k) {
		case 1:
			price = 3.5;
			break;
		case 2:
			price = 12.8;
			break;
		case 3:
			price = 8.0;
			break;
		case 4:
			price = 5.2;
			break;
		default:
			price = 0.0;
			break;
	}

	double total_cost = price * n;
	cout << fixed << setprecision(1) << total_cost << endl;

	return 0;
}
