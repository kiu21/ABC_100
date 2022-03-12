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
  vector<int> a(m);
  rep(i, m) cin >> a[i];

  rep(i, m)
  {
    n -= a[i];
  }
  if (n >= 0)
    cout << n << endl;
  else
    cout << -1 << endl;

  return 0;
}