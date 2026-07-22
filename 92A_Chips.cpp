#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    int current = 1;

    while (true) {
        if (m >= current) {
            m = m - current;
        } else {
            break;
        }

        current++;
        if (current > n) {
            current = 1;
        }
    }

    cout << m << endl;
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
