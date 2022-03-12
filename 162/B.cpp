#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  ll n;
  cin >> n;
  vector<int> a(n);
  ll ans = 0;
  for (ll i = 0; i <= n; i++)
  {
    if (i % 3 == 0)
      continue;
    if (i % 5 == 0)
      continue;
    ans += i;
  }
  cout << ans << endl;
  return 0;
}