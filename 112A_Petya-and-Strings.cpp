#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {

    string s ,x;
    cin >> s;
    cin>> x;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(x.begin(), x.end(), x.begin(), ::tolower);

    int n = s.length();
    int l = x.length();


    for (int i = 0; i < n; i++) {
        if (s[i]< x[i]  ){
          cout<<"-1"<<endl;
          return;
        }

        else if (s[i]> x[i]  ){
          cout<<"1"<<endl;
          return;

        }
        
    }
    
    cout<<"0"<<endl;
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
