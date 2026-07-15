#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    
    string s;
    cin >> s;
  
    int count=0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j < s.length(); j++) {
            if (s[i] == s[j]) {
                count++;
                break;
            }
        }
    }

    if((s.length()-count) %2 ==0)
    {
      cout<<"CHAT WITH HER!";
    }
    else{
      cout<<"IGNORE HIM!";
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
