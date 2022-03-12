#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int gcd(int a, int b)
{
  if (a % b == 0)
  {
    return b;
  }
  else
  {
    return gcd(b, a % b);
  }
}

int gcd2(int a, int b, int c)
{
  int g = gcd(a, b);
  int gg = gcd(b, c);
  int ggg = gcd(g, gg);
  return ggg;
}

int main()
{
  int k;
  cin >> k;
  ll ans = 0;
  rep(i, k) rep(j, k) rep(m, k) ans += gcd2(i + 1, j + 1, m + 1);
  cout << ans << endl;
  return 0;
}