//C Skill Up
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;
int a[12][12];

int main()
{
  int n, m;
  ll x;
  cin >> n >> m >> x;
  vector<ll> c(n);
  rep(i, n)
  {
    cin >> c[i];
    rep(j, m) cin >> a[i][j];
  }

  int ans = INF;
  rep(s, 1 << n) //2^n
  {              //シフト演算
    int cost = 0;
    vector<int> d(m);
    rep(i, n)
    {
      if (s >> i & 1)
      { //iビット目を取り出す
        cost += c[i];
        rep(j, m) d[j] += a[i][j];
      }
    }
    bool ok = true;
    rep(j, m) if (d[j] < x) ok = false;
    if (ok)
      ans = min(ans, cost);
  }
  if (ans == INF)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}