#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    string s;
    cin >> s;

    int lower = 0, upper = 0;

    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            lower++;
        } else if (isupper(s[i])) {
            upper++;
        }
    }

    if(lower>=upper){
      transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else{
      transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout<<s;
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
