#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int M = 1000005;

int main()
{
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  sort(a.begin(), a.end());
  vector<int> cnt(M);
  for (int x : a)
  {
    if (cnt[x] != 0)
    {
      cnt[x] = 2;
      continue;
    }
    for (int i = x; i < M; i += x)
      cnt[i]++;
  }
  int ans = 0;
  for (int x : a)
  {
    if (cnt[x] == 1)
      ans++;
  }
  cout << ans << endl;
  return 0;
}