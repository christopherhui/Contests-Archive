#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool canMakePalindrome(string str) {
  int count[256] = {0};
    for (int i = 0; str[i];  i++)
        count[str[i]]++;
    int odd = 0;
    for (int i = 0; i < 256; i++) {
        if (count[i] & 1)
            odd++;
        if (odd > 1)
            return false;
    }
    return true;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t; cin >> t;
  for (int test = 1; test <= t; test++) {
    int n, q; cin >> n >> q;
    string str; cin >> str;
    int count = 0;
    for (int i = 0; i < q; i++) {
      int a, b; cin >> a >> b;
      string subStr = str.substr(a-1,b-a+1);
      if (canMakePalindrome(subStr)) {
        count++;
      }
    }
    cout << "Case #" << test << ": " << count << endl;
  }
  return 0;
}