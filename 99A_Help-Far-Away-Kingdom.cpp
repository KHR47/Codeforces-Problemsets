#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
  string s;
  cin>>s;

  int dot =s.find('.');
  string intPart=s.substr(0,dot);
  string fracPart=s.substr(dot+1);

  int n = intPart.length();

  if(intPart[n-1]=='9'){
    cout<<"GOTO Vasilisa.";
    return;
  }
  if (fracPart[0] >= '5') {
        intPart[n-1] = intPart[n-1] + 1; 
    }

   
  int start = 0;
  while (start < n-1 && intPart[start] == '0') {
        start++;
  }

  cout << intPart.substr(start) << endl;

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
