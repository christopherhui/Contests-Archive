#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct s {
    pair<int, int> p;
    int i;
    char b;
};

bool cmptor(const s& a, const s& b) {
    return a.p.first == b.p.first ? a.p.second < b.p.second : a.p.first < b.p.first;
}

bool indexCmp(const s& a, const s& b) {
    return a.i < b.i;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int cam = 0, jam = 0;
        vector<s> v(n);
        string res = "";
        for (int j = 0; j < n; j++) {
            cin >> v[j].p.first >> v[j].p.second;
            v[j].i = j;
        }
        sort(v.begin(), v.end(), cmptor);
        for (int j = 0; j < n; j++) {
            if (v[j].p.first >= cam) {
                v[j].b = 'C';
                cam = v[j].p.second;
            }
            else if (v[j].p.first >= jam) {
                v[j].b = 'J';
                jam = v[j].p.second;
            }
            else {
                res = "IMPOSSIBLE";
            }
        }
        if (res != "IMPOSSIBLE") {
            sort(v.begin(), v.end(), indexCmp);
            for (s iter : v) {
                res += iter.b;
            }
        }
        printf("Case #%d: %s\n", i+1, res.c_str());
    }

    return 0;
}