#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int res = 0;
    for (int i = 1; i < n; ++i) if (s[i] == s[i - 1]) res++;
    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}