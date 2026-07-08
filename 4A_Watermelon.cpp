#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int w;
    cin >> w ;

    if(w%2==0 && w>=4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO";
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
