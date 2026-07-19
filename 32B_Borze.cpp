#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
  string s;
  cin>>s;

  for(int i=0; i<s.length(); i++){
    if(s[i] == '.'){
      cout<< 0;
    }
    if(s[i]== '-'){
      if(s[i+1]=='.'){
        cout<<1;
      }
      else if(s[i+1]=='-'){
        cout<<2;
      }
      i=i+1;
    }
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
