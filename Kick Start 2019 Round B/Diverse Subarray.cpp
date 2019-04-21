#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    for (int test = 1; test <= t; test++) {
        int n, s; cin >> n >> s;
        int val = 0;

        vector<int> v;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back(a);
        }

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                map<int, int> m;
                int count = 0;
                for (int k = i; k <= j; k++) {
                    m[v[k]]++;
                }

                for (auto it = m.begin(); it != m.end(); it++) {
                    if (it->second <= s) {
                        count += it->second;
                    }
                }
                val = max(val, count);
            }
        }

        cout << "Case #" << test << ": " << val << endl;
    }

    return 0;
}