#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k, s1 = 0, s2 = 0;
	double c1 = 0, c2 = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		if (i % k == 0) {
			s1++;
			c1 += i;
		} else {
			s2++;
			c2 += i;
		}
	}
	cout << fixed << setprecision(1) << c1 / s1 << ' ' << c2 / s2;
	return 0;
}
