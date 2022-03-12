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

  vector<pair<ll, int>> fs;
  for (ll i = 2; i * i <= n; ++i)
  {
    int x = 0;
    while (n % i == 0)
    {
      n /= i;
      ++x;
    }
    fs.emplace_back(i, x);
  }
  if (n != 1)
    fs.emplace_back(n, 1);

  int ans = 0;
  for (auto p : fs)
  {
    int x = p.second;
    int b = 1;
    while (b <= x)
    {
      x -= b;
      b++;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}