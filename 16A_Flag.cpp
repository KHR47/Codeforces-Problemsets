#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int n,m;
    cin>>n>>m;

    char arr[100][100];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(arr[i][j] != arr[i][0]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    for(int i=1; i<n; i++){
        if(arr[i][0] == arr[i-1][0]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;

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
