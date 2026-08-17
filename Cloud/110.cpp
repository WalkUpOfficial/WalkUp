#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;      // ¿â´æ
    double y;   // µ¥¼Û

    if (cin >> x >> y) {
        // 1. ÅÐ¶Ï¿â´æ
        if (x > 0) {
            cout << x << endl;
        } else {
            cout << "sold out" << endl;
        }

        // 2. ÅÐ¶Ï¼Û¸ñ
        if (y >= 100.0) {
            cout << "expensive" << endl;
        } else {
            cout << "cheap" << endl;
        }
    }

    return 0;
}
