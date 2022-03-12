#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{

  double r;
  cin >> r;
  double pi = acos(-1);
  double ans = 2 * pi * r;
  printf("%.10f\n", ans);
  return 0;
}