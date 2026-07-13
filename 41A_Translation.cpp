#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    string t, s;
    cin >> t >> s;

    if (t.length() != s.length()) {
        cout << "NO" << endl;
        return;
    }

    int n = t.length();
    int i = 0;
    int j = n - 1;

    while (i < n) {
        if (t[i] != s[j]) {
            cout << "NO" << endl;
            return;
        }
        i++;
        j--;
    }

    cout << "YES" << endl;
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
