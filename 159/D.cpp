#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

ll choose2(ll j)
{
  return j * (j - 1) / 2;
}

int main()
{
  int n;
  cin >> n;

  vector<ll> a(n);
  vector<ll> cnt(n);
  rep(i, n)
  {
    cin >> a[i];
    a[i]--;
    cnt[a[i]]++;
  }

  ll tot = 0;
  rep(i, n)
  {
    tot += choose2(cnt[i]);
  }

  rep(i, n)
  {
    ll ans = tot;
    ans -= choose2(cnt[a[i]]);
    ans += choose2(cnt[a[i]] - 1);
    cout << ans << endl;
  }

  return 0;
}