#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'
 
void solve() {
    int n;
    cin >> n;
    
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int best_diff = 1000000;
    int best_i = 0;
    int best_j = 0;
    
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        int diff = abs(arr[i] - arr[j]);
        if (diff < best_diff) {
            best_diff = diff;
            best_i = i;
            best_j = j;
        }
    }
    
    cout << best_i + 1 << " " << best_j + 1 << endl;
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