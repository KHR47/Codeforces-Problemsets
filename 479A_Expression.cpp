#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int x,y,z;
    cin >> x>>y>>z;

    int n = (x+y+z);
    int k = (x*y*z);
    int m = (x*(y+z));
    int l = (x+y*z);
    int o = ((x+y)*z);
    int p = (x*y+z);

    int mx = max({n,k,m,l,o,p});

    cout<<mx<<endl;

    


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
