#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        stack<char> st;
        string s; cin >> s;
        string newS = "";
        int prev = 0;
        for (char j : s) {
            if (prev < (j - '0')) {
                for (int k = prev; k < (j - '0'); k++) {
                    newS += '(';
                    st.push('(');
                }
                newS += j;
            }
            else if (prev > (j - '0')) {
                for (int k = (j - '0'); k < prev; k++) {
                    newS += ')';
                    st.pop();
                }
                newS += j;
            }
            else {
                newS += j;
            }
            prev = j - '0';
        }
        while (!st.empty()) {
            newS += ')';
            st.pop();
        }
        printf("Case #%d: %s\n", i+1, newS.c_str());
    }

    return 0;
}