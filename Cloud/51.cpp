#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double xa,ya,xb,yb;
    cin >> xa >> ya >> xb >> yb;
    double dx = xb - xa,dy = yb - ya,distance = sqrt(dx*dx + dy*dy);
    
    cout<<fixed<<setprecision(3)<<distance<< endl;
    return 0;
}
