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

  ll d = n / k;
  ll ans = abs(n - k * d);
  ans = min(ans, abs(ans - k));

  cout << ans << endl;
  return 0;
}