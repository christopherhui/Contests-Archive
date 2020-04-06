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
        int a = 0, b = 0, c = 0;
        vector<vector<int>> v(n, vector<int>(n));
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cin >> v[j][k];
            }
        }
        for (int j = 0; j < n; j++) {
            a += v[j][j];
        }
        for (int j = 0; j < n; j++) {
            unordered_set<int> s;
            for (int k = 0; k < n; k++) {
                if (s.find(v[j][k]) != s.end()) {
                    b++;
                    break;
                }
                s.insert(v[j][k]);
            }
        }
        for (int j = 0; j < n; j++) {
            unordered_set<int> s;
            for (int k = 0; k < n; k++) {
                if (s.find(v[k][j]) != s.end()) {
                    c++;
                    break;
                }
                s.insert(v[k][j]);
            }
        }
        printf("Case #%d: %d %d %d\n", i+1, a, b, c);
    }

    return 0;
}