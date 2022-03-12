#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll mod = 1e9 + 7;

ll powmod(int i, int j)
{
  int result = 1;
  rep(x, j)
  {
    result = result * i % mod;
  }
  return result;
}

int main()
{
  int n;
  cin >> n;

  int all = powmod(10, n);
  int no9 = powmod(9, n) - powmod(8, n);
  int no0 = powmod(9, n) - powmod(8, n);
  int soreigai = powmod(8, n);

  ll ans = powmod(10, n) - 2 * powmod(9, n) + powmod(8, n);
  ans %= mod;
  while (ans < 0)
    ans += mod;
  ans %= mod;
  cout << ans << endl;
  return 0;
}