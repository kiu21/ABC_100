#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int k, n;
  cin >> k >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> dist(n - 1);
  int sum = 0;
  int mx = 0;
  rep(i, n - 1)
  {
    dist[i] = a[i + 1] - a[i];
    sum += dist[i];
    mx = max(mx, dist[i]);
  }

  int ans = 0;
  if (sum > k - mx)
  {
    ans = k - mx;
  }
  else
  {
    ans = sum;
  }

  cout << ans << endl;
  return 0;
}