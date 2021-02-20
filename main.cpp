#include <bits/stdc++.h>

using namespace std;

// region template
using i32 = int;
using u32 = unsigned int;
using i64 = long long;
using u64 = unsigned long long;
using d64 = long double;
template<class T = i32> using V = vector<T>;
template<class T = i32> using VV = V<V<T>>;
template<class T1 = i32, class T2 = i32> using P = pair<T1, T2>;

template<class T> vector<T>& operator! (vector<T>& v) { reverse(v.begin(), v.end()); return v; }
template<class T> vector<T>& operator~ (vector<T>& v) { sort(v.begin(), v.end()); return v; }
template<class T> vector<T>& operator-- (vector<T>& v) { ~v; v.resize(unique(v.begin(), v.end() - v.begin())); return v; }
template<class T1, class T2> T1& operator+= (T1& s, const vector<T2>& v) { for (const T2& x : v) s += x; return s; }

constexpr d64 PI = 3.14159265358979323846L;
template<class T = i32> static constexpr T inf = numeric_limits<T>::max() >> 1;
// endregion


//#define interactive



void solve() {

}


i32 main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
#if defined(LOCAL) && !defined(interactive)
    freopen("input.txt", "r", stdin);
    for (i32 tcs = 1; cin.peek() != EOF; ) {
        cout << "Case #" << tcs++ << ":\n";
        solve();
        cout << endl << endl;
        string _str_;
        do getline(cin, _str_);
        while (!cin.eof() && !_str_.empty());
        while (isspace(cin.peek())) cin.get();
    }
#else
    solve();
#endif
    return 0;
}