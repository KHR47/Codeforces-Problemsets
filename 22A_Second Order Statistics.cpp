#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    int a[105];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    int first = a[0];
    int second = -1000;
    bool found = false;

    for (int i = 1; i < n; i++) {
        if (a[i] != first) {
            second = a[i];
            found = true;
            break;
        }
    }

    if (found) {
        cout << second << endl;
    } else {
        cout << "NO" << endl;
    }


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
