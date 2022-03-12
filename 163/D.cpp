#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int mod = 1e9 + 7;

ll sum(ll l, ll r)
{
  return (l + r) * (r - l + 1) / 2;
}

int main()
{

  int n, k;
  cin >> n >> k;
  ll ans = 0;
  for (int i = k; i <= n + 1; i++)
  {
    ll l = sum(0, i - 1);
    ll r = sum(n - i + 1, n);
    ans += r - l + 1;
    ans %= mod;
  }
  cout << ans << endl;

  return 0;
}