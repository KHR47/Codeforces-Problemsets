#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    int n = s.length();

    int run = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            run++;
            if (run >= 7) {
                cout << "YES" << endl;
                return;
            }
        } else {
            run = 1;
        }
    }

    cout << "NO" << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
