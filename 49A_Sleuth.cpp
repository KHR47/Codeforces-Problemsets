#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    int n = s.length();
    int i = n - 2;  

    while (s[i] == ' ') {
        i--;  
    }

    char c = s[i]; 

    string vowels = "aeiouy";
    bool isVowel = false;
    for (int k = 0; k < vowels.length(); k++) {
        if (c == vowels[k]) {
            isVowel = true;
        }
    }

    cout << (isVowel ? "YES" : "NO") << endl;
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