//C Peaks

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{

  int n, m;
  cin >> n >> m;
  vector<ll> h(n);
  rep(i, n) cin >> h[i];
  vector<int> a(m), b(m);
  vector<bool> ok(n, true);
  rep(i, n)
  {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    if (h[a[i] <= h[b[i]]])
      ok[a[i]] = false;
    if (h[b[i] <= h[b[i]]])
      ok[b[i]] = false;
  }

  int ans = 0;
  rep(i, m)
  {
    if (ok[i])
      ans++;
  }
  cout << ans << endl;
  return 0;
}
