//D Teleporter

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{

  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  //すでに訪れたかどうか
  vector<int> s;
  vector<int> ord(n + 1, -1);
  int c = 1, l = 0;
  {
    int v = 1;
    while (ord[v] != -1)
    {
      ord[v] = s.size();
      s.push_back(v);
      v = a[v - 1];
    }
    c = s.size() - ord[v];
    l = ord[v]; //例外部分の長さ
  }

  if (k < 1)
    cout << s[k] << endl;
  else
  {
    k -= l;
    k %= c;
    cout << s[l + k] << endl;
  }

  /*ll mod = 0;
  deque<int> hmod;
  int repe = 0;
  int i = 1;
  while (mod == 0)
  {
    hmod.push_back(i);
    i = a[i - 1];
    repe++;
    if (hmod.front() == i)
    {
      mod = repe - 1;
    }
  }
  repe = (k + 1) / mod;
  int amari = (k + 1) % mod;
  if (amari == 0)
    cout << hmod[mod] << endl;
  else
    cout << hmod[amari - 1] << endl;
  return 0;
  */
}