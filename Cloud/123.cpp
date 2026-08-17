#include <iostream>
#include <iomanip>

using namespace std;

int s;
double cost = 0.0;

int main() {
	cin >> s;

	if (s <= 3) {
		cost = 10.0;
	} else if (s <= 10) {
		cost = 10.0 + (s - 3) * 2.0;
	} else {
		cost = 24.0 + (s - 10) * 3.0;
	}

	cout << fixed << setprecision(1) << cost << endl;

	return 0;
}
