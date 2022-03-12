#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  while (a > 0 and c > 0)
  {
    c -= b;
    if (c <= 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
    a -= d;
    if (a <= 0)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  return 0;
}