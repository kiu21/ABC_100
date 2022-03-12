#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  ll x;
  cin >> x;

  ll ans = 0;
  ans += (x / 500) * 1000;
  int a = x % 500;
  ans += (a / 5) * 5;
  cout << ans << endl;
  return 0;
}