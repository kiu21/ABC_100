#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{

  int m, n;
  cin >> n >> m;
  vector<P> ans;
  if (n % 2)
  {
    for (int l = 1, r = n - 1; l < r; l++, r--)
    {
      ans.emplace_back(l, r);
    }
  }
  else
  {
    bool flag = false;
    for (int l = 1, r = n - 1; l < r; l++, r--)
    {
      if (!flag and r - l <= n / 2)
      {
        --r;
        flag = true;
      }
      ans.emplace_back(l, r);
    }
  }
  rep(i, m)
  {
    printf("%d %d\n", ans[i].first, ans[i].second);
  }

  return 0;
}