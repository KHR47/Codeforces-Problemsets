#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {

    int x;
    cin>> x;

    int arr[1005][2];
    for(int i=0; i<x; i++){
      for(int j=0; j<2; j++){
        cin>>arr[i][j];
      }
      
      
    }

    arr[0][0] = 0;          
    arr[x - 1][1] = 0;

    int sum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < x; i++) {
        sum += (-arr[i][0] + arr[i][1]);

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    cout << maxSum;
       
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
