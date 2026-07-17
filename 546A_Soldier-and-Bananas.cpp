#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int k,n,w;
    cin >> k>>n>>w;

    int SUM= 0;
    for(int i=1; i<=w; i++){
       int s=i*k;
       SUM=SUM+s;


    }
    int ss = SUM-n;

    if(ss>=0){
      cout<<ss<<endl;
    }
    else{
      cout<<0<<endl;
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
