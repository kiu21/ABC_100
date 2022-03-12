//C Multiplication

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{

  ll a;
  double b;
  cin >> a >> b;
  ll ib = b * 100 + 0.5;
  a *= ib;
  a /= 100;
  printf("%lld\n", a);
  return 0;
}