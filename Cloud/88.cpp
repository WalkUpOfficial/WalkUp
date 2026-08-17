#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 定义画作结构体
struct Drawing {
    int w, h; // 始终保持 w <= h
};

int main() {
    // 开启极速IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<Drawing> drawings(n);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        // 【关键步骤1】标准化方向：始终让 w 为短边，h 为长边
        drawings[i].w = min(a, b);
        drawings[i].h = max(a, b);
    }

    // 【关键步骤2】排序：优先按长边从大到小，长边相同按短边从大到小
    sort(drawings.begin(), drawings.end(), [](const Drawing& a, const Drawing& b) {
        if (a.h != b.h) return a.h > b.h;
        return a.w > b.w;
    });

    // A0 - A6 标准尺寸 (宽, 高)，已按从大到小排列
    // 注意：这里也保持 w <= h
    vector<pair<int, int>> papers = {
        {841, 1189}, // A0
        {594, 841},  // A1
        {420, 594},  // A2
        {297, 420},  // A3
        {210, 297},  // A4
        {148, 210},  // A5
        {105, 148}   // A6
    };

    int counts[7] = {0};

    // 贪心匹配
    for (const auto& d : drawings) {
        bool placed = false;
        for (int i = 0; i < 7; ++i) {
            int pw = papers[i].first;
            int ph = papers[i].second;
            
            if (d.w <= pw && d.h <= ph) {
                counts[i]++;
                placed = true;
                break; // 找到最小的合适纸张，立即跳出
            }
        }
        // 题目保证 A0 能容纳所有数据，所以不需要处理 placed == false 的情况
    }

    // 输出结果
    for (int i = 0; i < 7; ++i) {
        cout << counts[i];
        if (i < 6) cout << " ";
    }
    cout << endl;

    return 0;
}
