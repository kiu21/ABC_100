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
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int sum = 0;
  rep(i, n)
  {
    sum += a[i];
  }
  sum = (sum + 4 * m - 1) / (4 * m);

  int cnt = 0;
  rep(i, n)
  {
    if (a[i] >= sum)
      cnt++;
  }

  if (cnt >= m)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}