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

std::string toBinary(int n) {
  std::string r = "";
  while (n != 0) {
    r = (n % 2 == 0 ? "0" : "1") + r;
    n /= 2;
  }
  return r;
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
string ips;

int main() {
  FASTIO;

  cin >> t;
  getline(cin, ips);
  while (t--) {
    getline(cin, ips);
    vector<string> v = split(ips, '.');
    for (ll j = 0; j < size(v); j++) {
      int b = stoi(v[j]);
      int binary[8] = {0};
      int i = 7;
      while (b > 0) {
        binary[i] = b % 2;
        b /= 2;
        i--;
      }
      for (int k = 0; k < 8; k++) {
        cout << binary[k];
      }
      if (j < size(v) - 1)
        cout << ".";
    }
    cout << endl;
  }
  return 0;
}