#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    
    while (n--) {
        string s; cin >> s;
        
        if (s.size() > 10) cout << s[0] << s.size() - 2 << s[s.size() - 1] << '\n';
        else cout << s << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}