/* c */
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

ll t;
string ch, ch2;
vector<string> v;

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

int main() {
  FASTIO;

  cin >> t;
  while (t--) {
    cin >> ch;
    if (ch == "pwd") {
      for (auto a : v) {
        cout << '/' << a;
      }
      cout << '/' << endl;
    } else {
      cin >> ch;
      if (ch[0] == '/') {
        v.clear();
      }
      vector<string> arr = split(ch, '/');
      for (auto a : arr) {
        if (a == "..") {
          v.pop_back();
        } else {
          v.pb(a);
        }
      }
    }
  }

  return 0;
}