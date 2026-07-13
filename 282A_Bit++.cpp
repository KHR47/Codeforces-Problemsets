#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int n;
    cin >> n;

   string s;


   int X=0;
   for(int i=0; i<n; i++){
    cin>>s;
    if(s[1] == '+'){
      X++;
    }

    if(s[1]=='-'){
      X--;
    }

   }

   cout<<X;
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
