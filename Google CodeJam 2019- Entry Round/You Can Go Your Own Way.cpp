#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        string path; cin >> path;
        cout << "Case #" << i << ": ";
        for (auto it = path.begin(); it != path.end(); it++) {
            if (*it == 'E') cout << 'S';
            else cout << 'E';
        }
        cout << "\n";
    }

    return 0;
}