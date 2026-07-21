#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    string s,t,u;
    getline(cin, s);
    getline(cin, t);
    getline(cin, u);

    int count = 0;
    int count2 = 0;
    int count3 = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }
    for (int j = 0; j < t.length(); j++) {
        if (t[j] == 'a' || t[j] == 'e' || t[j] == 'i' ||
            t[j] == 'o' || t[j] == 'u') {
            count2++;
        }
    }

    for (int k = 0; k < u.length(); k++) {
        if (u[k] == 'a' || u[k] == 'e' || u[k] == 'i' ||
            u[k] == 'o' || u[k] == 'u') {
            count3++;
        }
    }

    if(count==5 && count2==7 && count3==5){
      cout<<"YES";
    }
    else{
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
