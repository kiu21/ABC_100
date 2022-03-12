//B Easy Linear Programming

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{

  ll a, b, c, k;
  cin >> a >> b >> c >> k;
  ll ans = 0;

  if (k <= a)
  {
    ans += k;
  }
  else
  {

    ans += a;
    k -= a;
    if (k >= 0)
    {
      ans += 0 * b;
      k -= b;
      if (k >= 0)
      {
        ans -= k;
      }
    }
  }

  cout << ans << endl;

  return 0;
}