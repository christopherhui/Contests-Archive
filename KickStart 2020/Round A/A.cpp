#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> pt;
typedef vector<pt> pol;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<ld> vd;
typedef vector<vd> vvd;
typedef pair<ll, ll> pii;
typedef vector<pii> vpii;
#define EPS 1e-8

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        ll t, b; cin >> t >> b;
        vector<ll> vals(t);
        for (int j = 0; j < t; j++) {
            cin >> vals[j];
        }
        sort(vals.begin(), vals.end());
        ll count = 0;
        while (b > 0 && count < t) {
            b -= vals[count];
            if (b >= 0) {
                count++;
            }
            else break;
        }
        cout << "Case #" << i+1 << ": " << count << '\n';
    }

    return 0;
}