#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int y,w,m,A,B;

    while(y<1 || y>6 || w<1 || w>6){
        cin >> y >> w ;
    }

    m=max(y,w);
    A=6-m+1;
    B=6;
    int g = __gcd(A, B);
    A = A / g;
    B = B / g;

    cout << A << "/" << B << endl;


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
