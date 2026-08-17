#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    
    // for 循环枚举天数
    for (int day = 1; ; day++) {
        bool ming_runs = (day % a == 0);   // 检查这一天是否是小明的跑步日
        bool dong_runs = (day % b == 0);   // 检查这一天是否是小东的跑步日
        bool li_runs = (day % c == 0);   // 检查这一天是否是小李的跑步日
        if (ming_runs && dong_runs && li_runs) {   // 如果三个人都跑步
            cout << day << endl;
            break;
        }
    }
    
    return 0;
}
