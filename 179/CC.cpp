#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;

  int ans = 0;
  rep(i, n)
  {
    double a = (n - c) / b;
    int aa = (n - c) / b;
    double aaa = (a - aa) * 100;
    if (aaa == 0)
      ans++;
  }

  cout << ans << endl;

  return 0;
}