#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {

    string s;
    cin >> s;
    int n = s.length();

    string target= "hello";

    int index=0;

    for (int i = 0; i < n; i++) {
        if (target[index]== s[i]   ){
          index++;
          if(index==5){
            cout<< "YES"<<endl;
            return;
          }
        
        }       
    }

    cout<<"NO"<<endl;

  
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
