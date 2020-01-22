#include <bits/stdc++.h>

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

ll n, e;
map<ll, vector<ll>> adj;
bool vis[100001];

bool isCycle(ll a) {
  if (vis[a]) {
    return true;
  }
  vis[a] = true;
  for (auto b : adj[a]) {
    if (isCycle(b)) {
      return true;
    }
  }
  vis[a] = false;
  return false;
}

int main() {
  FASTIO;

  cin >> n >> e;
  while (e--) {
    ll a, b;
    cin >> a >> b;
    a--, b--;
    adj[a].pb(b);
  }

  for (ll i = 0; i < n; i++) {
    if (isCycle(i)) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;

  return 0;
}