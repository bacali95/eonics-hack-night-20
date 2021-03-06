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

vector<string> split(string ch, char sep) {
  vector<string> res;
  int index = 0;
  while (index < size(ch)) {
    int index2 = ch.find(sep, index);
    if (index2 > -1) {
      string aux = ch.substr(index, index2 - index);
      if (size(aux) > 0)
        res.pb(aux);
      index = index2 + 1;
    } else {
      if (index < size(ch)) {
        res.pb(ch.substr(index));
      }
      break;
    }
  }
  return res;
}

ll t, n, e;
string query;

int main() {
  FASTIO;

  cin >> t;
  getline(cin, query);
  while (t--) {
    getline(cin, query);
    vector<string> v = split(query, ' ');
    map<string, int> ma;
    for (ll i = 0; i < size(v); i++) {
      if (!ma.count(v[i])) {
        ma[v[i]] = i;
      }
      if (v[i][0] == '-') {
        if (ma.count(v[i].substr(1))) {
          ma.erase(v[i].substr(1));
          ma.erase(v[i]);
        }
      } else {
        if (ma.count("-" + v[i])) {
          ma.erase("-" + v[i]);
          ma.erase(v[i]);
        }
      }
    }
    vector<pair<ll, string>> res;
    for (auto a : ma) {
      res.push_back({a.second, a.first});
    }
    sort(res);
    for (auto a : res) {
      cout << a.second << " ";
    }
    cout << endl;
  }

  return 0;
}