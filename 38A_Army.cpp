#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    int d[100];
    for (int i = 1; i <= n-1; i++) {
        cin >> d[i];
    }

    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b-1; i++) {
        sum += d[i];
    }

    cout << sum << endl;
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
