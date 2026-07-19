#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int x;
    cin >> x;


    int n=1;
    while(true){
      int triangular = n * (n + 1) / 2;

      if(triangular==x){
        cout<<"YES";
        return;
      }
      else if(triangular > x){
        cout<<"NO";
        return;
      }

      n++;
      
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
