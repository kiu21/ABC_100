#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int l;
  cin >> l;
  double x = l / 3;
  double ans = pow(x, 3);
  printf("%.10f/n", ans);
  return 0;
}