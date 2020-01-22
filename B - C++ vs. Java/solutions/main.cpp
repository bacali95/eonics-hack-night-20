#include <bits/stdc++.h>
#include <cstdlib>
#include <string>

using namespace std;

typedef long long ll;
#define PI acos(-1)
#define endl "\n"
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define read(v, n)                                                             \
  for (ll i = 0, a; i < n; i++)                                                \
    cin >> a, v.pb(a);
#define all(v) v.begin(), v.end()
#define size(v) v.size()
#define sort(v) sort(all(v))
#define reverse(v) reverse(all(v))
#define FASTIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

template <class T> ostream &operator<<(ostream &os, vector<T> v) {
  for (auto a : v) {
    os << a << " ";
  }
  return os;
}

template <class L, class R> ostream &operator<<(ostream &os, pair<L, R> p) {
  os << "{" << p.first << "," << p.second << "}";
  return os;
}

ll t, n, e;
string s;

int main() {
  FASTIO;

  cin >> n >> s;
  ll ans[n];
  memset(ans, 0, sizeof ans);
  for (int k = 1; k < n - 1; k++) {
    if (s[k] != s[k + 1] && s[k] != s[k - 1]) {
      ans[k] = -1;
      if (ans[k - 1] != -1)
        ans[k - 1] = 1;
      if (ans[k + 1] != -1)
        ans[k + 1] = 1;
    }
  }
  for (int k = 0; k < n; k++) {
    if (ans[k] == -1)
      cout << "losing" << endl;
    else if (ans[k] == 1)
      cout << "winning" << endl;
    else
      cout << "draw" << endl;
  }

  return 0;
}