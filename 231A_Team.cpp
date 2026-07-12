#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    int arr[1005][3];

    for (int i = 0; i < n; i++) {
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
    
        }
    }

    int count2=0;
    for (int i = 0; i < n; i++) {
        int count=0;

        for(int j=0; j<3; j++){
            if(arr[i][j]==1){
                count=count+1;
            }
        }

        if(count>=2){
            count2=count2+1;
        }
    }

    cout<<count2<<endl;
   
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
