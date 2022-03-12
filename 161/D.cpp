#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int k;
  cin >> k;
  vector<ll> a;
  for (int i = 1; i <= 9; i++)
    a.push_back(i);
  while (1)
  {
    if (k <= a.size())
    {
      cout << a[k - 1] << endl;
      return 0;
    }
    k -= a.size();
    vector<ll> old;
    swap(old, a);
    for (ll x : old)
    {
      for (int i = -1; i <= 1; i++)
      {
        int d = x % 10 + i;
        if (d < 0 || d > 9)
          continue;
        ll nx = x * 10 + d;
        a.push_back(nx);
      }
    }
  }

  return 0;
}
