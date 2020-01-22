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

ll t, n, v, l;
vector<ll> vec;

int main() {
  FASTIO;

  cin >> t;
  while (t--) {
    vec.clear();
    cin >> n >> v >> l;
    read(vec, n);
    ll j = 0;
    ll nbr = 0;
    while (j < v) {
      nbr += vec[j++];
    }
    ll mn = nbr;
    while (j < n) {
      nbr -= vec[j - v];
      nbr += vec[j++];
      mn = min(mn, nbr);
    }
    cout << l - mn << endl;
  }

  return 0;
}