//E This Message Will Self-Destrust in 5s

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  map<int, int> mp;
  ll ans = 0;
  rep(i, n)
  {
    int wa = a[i] + i;
    mp[wa]++;
  }
  rep(i, n)
  {
    int sa = i - a[i];
    ans += mp[sa];
  }

  cout << ans << endl;
  return 0;
}