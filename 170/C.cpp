#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int x, n;
  cin >> x >> n;
  vector<int> v(102);
  int a;
  rep(i, n)
  {
    cin >> a;
    v[a] = a;
  }

  vector<int> w(102);
  rep(i, 102)
  {
    if (v[i] == 0)
    {
      w[i] = 1;
    }
  }

  int ans = 0;
  int min = 99;
  for (int i = 0; i <= 101; i++)
  {
    if (w[i])
    {
      if (min > abs(x - i))
      {
        min = abs(x - i);
        ans = i;
      }
    }
  }

  cout << ans << endl;
  return 0;
}

