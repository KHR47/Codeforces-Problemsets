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

  int count=0;
  for(int i=0; i<n; i++){
    cin>>s;

    if(s.length()>10){
      char a=s[0];
      char b=s[s.length()-1];
      count=(s.length()-2);

      cout<<a<<count<<b<<endl;
    }
    else{
      cout<<s<<endl;
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
