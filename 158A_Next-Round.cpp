#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {

  int n,k;
  cin>>n>>k;

  int arr[50];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int count=0;
  for(int i=0; i<n; i++){
    if(arr[i] > 0 && arr[i]>=arr[k-1])
    count++;
  }

  cout<<count;
  
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
